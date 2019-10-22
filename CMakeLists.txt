cmake_minimum_required(VERSION 2.8.12)

project(royal)

# This is mostly available for development purposes.
# This should always be on or when the python package is installed it won't build the C
# extension.
option(WITH_python_extension "Builds the python extension as well as the C++ library" ON)

if(WITH_python_extension MATCHES ON)
    add_subdirectory(pybind11)
endif(WITH_python_extension MATCHES ON)

# Disable some windows specific warnings for using more modern c functions
if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

find_file(HAVE_STDINT_HEADER stdint.h)
if(HAVE_STDINT_HEADER)
   message("** stdint.h found")
   add_definitions(-DROYAL_HAVE_STDINT_HEADER)
else(HAVE_STDINT_HEADER)
   message("** stdint.h not found")
endif(HAVE_STDINT_HEADER)

# Builds the cpp library
add_subdirectory(src)

# The python wrapper code is in pysrc
if(WITH_python_extension MATCHES ON)
    include_directories(${PROJECT_SOURCE_DIR}/include)
    pybind11_add_module(royal pysrc/main.cpp)
    target_link_libraries(royal PRIVATE royals)
endif(WITH_python_extension MATCHES ON)
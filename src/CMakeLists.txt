# src cmake for royal project

include_directories(${PROJECT_SOURCE_DIR}/include)

set(ROYAL_LIB_SOURCES
    RoyalCards.cpp
)

add_library(royals STATIC "${ROYAL_LIB_SOURCES}")
add_library(royalsh SHARED "${ROYAL_LIB_SOURCES}")
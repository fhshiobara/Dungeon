
cmake_minimum_required(VERSION 3.16)

# ============================================================
#Dungeon
# ============================================================
project(Jogo LANGUAGES CXX)

set(EXECUTAVEL ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ============================================================
# SFML
# Ajuste apenas se a instalação estiver em outro local
# ============================================================
set(SFML_DIR "C:/msys64/mingw64/lib/cmake/SFML")

find_package(SFML 2.6 REQUIRED COMPONENTS
    graphics
    window
    system
    audio
)

include_directories(include)

# ============================================================
# Copia a pasta assets para a pasta build
# ============================================================
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

# ============================================================
# Headers (apenas para aparecerem na IDE)
# ============================================================
file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS
    "include/*.h"
    "include/*.hpp"
)

# ============================================================
# Assets (apenas para aparecerem na IDE)
# ============================================================
file(GLOB_RECURSE ASSET_FILES CONFIGURE_DEPENDS
    "assets/*"
)

# ============================================================
# Arquivos fonte (.cpp)
#
# Adicione aqui TODOS os novos arquivos .cpp do projeto.
#
# Exemplo:
#
# src/Player.cpp
# src/Enemy.cpp
# src/Game.cpp
#
# Se criar uma pasta:
#
# src/entidades/Player.cpp
# src/interface/Menu.cpp
#
# Basta adicionar aqui.
# ============================================================

set(SOURCES

    # ==========================
    # Arquivo principal
    # ==========================
    src/main.cpp

    # ==========================
    # Adicione novos .cpp abaixo
    # ==========================

)

# ============================================================
# Criação do executável
# ============================================================

add_executable(${EXECUTAVEL}

    ${SOURCES}

    # Apenas para aparecerem na IDE
    ${HEADER_FILES}
    ${ASSET_FILES}
)

# ============================================================
# Organiza as pastas na IDE
# ============================================================

source_group(
    TREE "${CMAKE_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_FILES}
)

source_group(
    TREE "${CMAKE_SOURCE_DIR}/assets"
    PREFIX "Assets"
    FILES ${ASSET_FILES}
)

# ============================================================
# Bibliotecas
# ============================================================

target_link_libraries(${EXECUTAVEL}

    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio

)

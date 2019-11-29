cmake_minimum_required(VERSION 2.8)

#find_package(PkgConfig)

project(OpenSiv3D_Web CXX)

set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_COMPILER "em++")
set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Wno-unknown-pragmas -Wno-missing-braces -Wno-undefined-inline -fPIC -msimd128 -D_GLFW_X11 -s EXIT_RUNTIME=1 -s FULL_ES2=1 -s USE_GLFW=3 -s USE_WEBGL2=1 -s WASM=1 --pre-js pre.js")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG -march=x86-64")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=x86-64")

set(CMAKE_C_COMPILER "emcc")
#set(CMAKE_C_COMPILER "gcc")
set(CMAKE_C_FLAGS "-Wall -Wextra -Wno-unknown-pragmas  -Wno-missing-braces -fPIC -msimd128 -D_GLFW_X11 -s EXIT_RUNTIME=1 -s FULL_ES2=1 -s USE_GLFW=3 -s USE_WEBGL2=1 -s WASM=1")
set(CMAKE_C_FLAGS_DEBUG "-g3 -O0 -pg -DDEBUG")
set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG -march=x86-64")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set(CMAKE_C_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=x86-64")

set(CMAKE_EXECUTABLE_SUFFIX ".html")

include_directories(
	"../../Siv3D/include"
	"../../Siv3D/include/ThirdParty"
)

set(SOURCE_FILES
	"./Main.cpp"
)


add_executable(Siv3D_App ${SOURCE_FILES})

target_link_libraries(Siv3D_App
	-lGLEW

	${PROJECT_SOURCE_DIR}/../Build/libSiv3D.a
)


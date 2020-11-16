cmake_minimum_required(VERSION 3.0)
project(imgui)

add_library(imgui
            imgui/imconfig.h
            imgui/imgui.h
            imgui/imgui.cpp
            imgui/imgui_demo.cpp
            imgui/imgui_draw.cpp
            imgui/imgui_internal.h
            imgui/imgui_widgets.cpp
            imgui/imstb_rectpack.h
            imgui/imstb_textedit.h
            imgui/imstb_truetype.h)
target_include_directories(imgui PUBLIC imgui/)

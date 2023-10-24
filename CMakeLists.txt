cmake_minimum_required(VERSION 3.26)
project(Projet_Snoopy C)

set(CMAKE_C_STANDARD 23)

add_executable(Projet_Snoopy main.c
        saisie_clavier.h
        Saisie_clavier.c)

 # Autoversion makefile
  2 # (C) 2015, Ruben Carlo Benante
  3
  4 #Usage:
  5 # * From linux prompt:
  6 #    - Normal C program (ex1.c)
  7 #        $ make ex1.x
  8 #    - Aspipo program (ex1.c)
  9 #        $ make ex1.x obj=libaspipo-ux64.o
 10 # * From vim command:
 11 #    - Normal C program (ex1.c)
 12 #        :make
 13 #    - Aspipo program (ex1.c)
 14 #        :make obj=libaspipo-ux64.o
 15
 16 .PHONY: clean
 17 .PRECIOUS: %.o
 18 SHELL=/bin/bash -o pipefail
 19
 20 MAJOR = 0
 21 MINOR = 1
 22 BUILD = $(shell date +"%g%m%d.%H%M%S")

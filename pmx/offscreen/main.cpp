// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file pmx.license for terms.

#include "../pmx/main"

#include <exlib/app/offscreen/main_cpp>

int main(int argc,char** argv) {return exlib_main<pmx::main>("pmx",argc,argv);}

//exlib_build_use inlib expat
//exlib_build_use exlib png jpeg zlib inlib_glutess freetype kernel
//exlib_build_bigobj

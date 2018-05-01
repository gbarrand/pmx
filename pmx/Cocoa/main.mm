// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file pmx.license for terms.

#include "../pmx/main"

typedef pmx::main app_main_t;

#import <exlib/app/Cocoa/main_mm>

int main(int argc,char** argv) {return exlib_main<pmx::context,pmx::main>("pmx",argc,argv);}
 

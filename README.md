# Xcode-Gtest-Instruction

So, if you face a problem, you need to do C ++ unit testing (Google Test), but your IDE is Xcode, this instruction is for you.

This repository have little math dylib and directory main, which contains cpp file with which you can use the library. You can download and play with it.

Instruction:
 1. Creare or download C++ STL Library.
 2. Make some function.(or just download mine). Install CMake->Tools-How Install for Command Line Use->follow the instructions
 3. Further you need download in project directory googletest framework https://github.com/google/googletest.git and download this https://github.com/mattstevens/xcode-googletest.git
 4. Open terminal(Without homebrew) 
 5. cd googletest
 6. mkdir build
 7. cd build
 8. cmake ..
 9. make
 10.make install
 11.open Xcode 
 12.Project Settings->Build Settings->Search Path->Header Search Path
 13.Specify the path to the folder "include"
 14.Library Search Path
 15.Specify the path to the folder "lib"(build/lib)
 16.Go to target with our library->General->Frameworks and Libraries-> Include libraries from folder build/lib/
 17.Build Phases->Link binary with Libraries->add lib/
 18.Create new target (Unit Test Bundle)(Language: Objective-C)
 19.Open Finder (project directory)
 20.Create new folder and c ++ file inside. Drag file in xcode (In the dialog box, in the target item select your test)
 21.In c++ file write thic code:
 22.In this folder you must add GoogleTests.mm file (xcode-googletest->Bundle->GoogleTests.mm)
 23.You may delete Test file(and info.plist also) 
 24.The final is coming soon!
 25.Project Settings->(Choose Target and)->Build Phases->add library of build/lib/
 26.In the last created folder open our cpp file and write this:
 #include <gtest/gtest.h>
 #include "RootMath.hpp"
 #include <math.h>
  TEST(a, b){
    ASSERT_TRUE(true);
  }
 27.Product->Test
 28.Enjoy
  
  
  

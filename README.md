# README simulinkOSC module

- use the osc library [`oscpack_1_1_0`](http://www.rossbencina.com/code/oscpack)

## Workflow
- The basis of the module is the s-function generator on Matlab: `simulinkOSC_dev.slx`
  - The block in this model will create the files `simulinkOSC.cpp` and `simulinkOSC_wrapper.cpp`
  - Do **not** edit these files.
  - Exclusively edit the custom code in `simulinkOSC_mycode.cpp`
- Compile the code either from within `simulinkOSC_dev.slx` or using `compile.bat`
- The library file is `simulinkOSC.slx`

## Install
- Default location is `%USERPROFILE%\Documents\MATLAB\simulinkOSC`


- "If you want the library to appear in the Library Browser, enable the model property EnableLBRepository before you save the library."
   `set_param('simulinkOSC_lib','EnableLBRepository','on');`


PID Controller is tuned to achieve the requirements:

1. Rise Time < 10s
2. Overshoot < 10%
3. SteadyStateError < 1%

Results acheived:

1. Rise Time = 2.7407
2. Overshoot = 0
3. SteadyStateError calculated as: 
    ReferenceInput - SettlingMax: 100 - 99.9996 = 0.0040

Note: 
1. The values are obtained by executing 'stepinfo' command and using the scope data 'CC_PID_DATA' logged to the base workspace (Screenshot is present in the folder).
2. The controller gains and the parameters of the plant model are defined in 'CC_PID.m' file, it is being called from the 'PreLoad' callback function in the model.
  


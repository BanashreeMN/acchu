PID Controller is tuned to achieve the requirements:

1. Rise Time < 5s
2. Overshoot < 5%
3. SteadyStateError < 1%

Results acheived:

1. Rise Time = 0.0721
2. Overshoot = 0.00000017055
3. SteadyStateError calculated as:
    ReferenceInput - SettlingMax = 1 - 1.0000 = 0.0000
    (From Scope SettlingMax = 0.99999985) 

Note: 
1. The values are obtained by executing 'stepinfo' command and using the scope data 'MS_PID_DATA' logged to the base workspace (Screenshot is present in the folder).
2. The controller gains and the parameters of the plant model are defined in 'MS_PID.m' file, it is being called from the 'PreLoad' callback function in the model.
  


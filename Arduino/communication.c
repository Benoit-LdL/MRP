/*
 -> format data in json object -> ArduinoJson library
 -> default value / dont change value = -1
 -> store data in arduino aswell

 data types:
    get / set:
        
        config_stepper:
            microstepping
            max_speed

        move:
            stepper 1
                dist
                speed
                accel
                curPos
                move
            stepper 2
                dist
                speed
                accel
                curPos
                move
            stepper 3
                dist
                speed
                accel
                curPos
                move
            stepper 4
                dist
                speed
                accel
                curPos
                move
        
        stop: -> disable steppers
        
        sensor
            id
            analogIn
            analogOut
            digitalIn
            digitalOut

*/
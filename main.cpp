#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:    car
//  action 1:    car drives forward
car.drivesForward();
//  action 2:    car drives backwards
car.drivesBackwards();
//  action 3:    car stops
car.stops();
//  2)
//  Noun:    toasterOven
//  action 1:  toaster oven heats up
toasterOven.heatsUp();
//  action 2:    toaster oven cools down
toasterOven.coolsDown();
//  action 3:    toaster oven gets dirty
toasterOven.getsDirty();
//  3)    
//  Noun:    heatPump
//  action 1:    heat pump blows cool air
heatPump..blowsWarmAir();
//  action 2:    heat pump blows warm air
heatPump.blowsColdAir();
//  action 3:    heat pump makes filter dirty
heatPump.makesFilterDirty();
//  4)
//  Noun:    refrigerator
//  action 1:    refrigerator keeps food cold
refrigerator.keepsFoodCold();
//  action 2:    refrigerator makes ice
refrigerator.makesIce();
//  action 3:    refrigerator keeps food frozen
refrigerator.keepsFoodFrozen();
//  5)
//  Noun:    spaceship
//  action 1:    spaceship shoots phasers
spaceship.shootPhasers();
//  action 2:    spaceship goes to lightspeed
spaceship.goToLightspeed();
//  action 3:    spaceship cloaks itself
spaceship.cloak();
//  6)    
//  Noun:    bird
//  action 1:    bird flys
bird.fly();
//  action 2:    bird eats bugs
bird.eatBugs();
//  action 3:    bird builds nest
bird.buildNest();
//  7)
//  Noun:    dog
//  action 1:    dog bites mailman
dog.biteMailman();
//  action 2:    dog chases cat
dog.chaseCat;
//  action 3:    dog eats kibble
dog.eatKibble();
//  8)   
//  Noun:    flower
//  action 1:    flower blooms
flower.bloom();
//  action 2:    flower gives off fragrance
flower.givesOffFragrance();
//  action 3:    flower wilts
flower.wilt();
//  9)
//  Noun:    cellPhone
//  action 1:    cell phone rings
cellPhone.ring();
//  action 2:    cell phone power off
cellPhone.powerOff();
//  action 3:    cell phone screen saver turns on
cellPhone.screenSaverOn();
//  10)   
//  Noun:    weather
//  action 1:    weather becomes cloudy
weather.becomesCloudy();
//  action 2:    weather starts raining
weather.startsRaining();
//  action 3:    weather becomes clear
weather.becomesClear();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

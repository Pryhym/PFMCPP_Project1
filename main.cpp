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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:   knife
//  action 1:   cuts
knife.cut();
//  action 2:   poke
knife.poke();
//  action 3:   stab
knife.stab();
//  2)
//  Noun:   fist
//  action 1:   punch
fist.punch();
//  action 2:   bumps
fist.bump();
//  action 3:   pounds
fist.pound();
//  3)
//  Noun:   leftFoot
//  action 1:   leftRun
leftFoot.leftRun();
//  action 2:   leftJump
leftFoot.leftJump();
//  action 3:   leftKick
leftFoot.leftKick();
//  4)
//  Noun:   eyes
//  action 1:   see
eyes.see();
//  action 2:   blink
eyes.blink();
//  action 3:   roll
eyes.roll();
//  5)
//  Noun:   feet
//  action 1:   run
feet.run();
//  action 2:   slide
feet.slide();
//  action 3:   dance
feet.dance();
//  6)
//  Noun:   gun
//  action 1:   fire
gun.fire();
//  action 2:   cock
gun.cock();
//  action 3:   load
gun.load();
//  7)
//  Noun:   lips
//  action 1:   kiss
lips.kiss();
//  action 2:   lick
lips.lick();
//  action 3:   suck
lips.suck();
//  8)
//  Noun:   sword
//  action 1:   slash
sword.slash();
//  action 2:   slice
sword.slice();
//  action 3:   block
sword.block();
//  9)
//  Noun:   car
//  action 1:   moveForward
car.moveForward();
//  action 2:   moveBack
car.moveBack();
//  action 3:   turn
car.turn();
//  10)
//  Noun:   hand
//  action 1:   grab
hand.grab();
//  action 2:   slap
hand.slap();
//  action 3:   push
hand.push();


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

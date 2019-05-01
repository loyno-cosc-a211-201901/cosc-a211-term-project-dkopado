// Program Name: Final Project
// Purpose: To show what I learned this year
// Author: Diego Kopado
// Date Last Modified: 4/26/2019

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main ()
{

int character;
//intro to the game

cout << " Welcome to: Goon Cocoon And The Quest For The Gig Of Truth" << endl;
cout << endl << endl;

// character menu
cout << " Please choose your character: " << endl << endl;
cout << " 1. Jocie: Hypnotises enemies with her siren song" << endl;
cout << " 2. Noah: Bores enemies to death by explaining the concepts of  synthesis in depth" << endl;
cout << " 3. Diego: b a s s " << endl;
cout << " 4. Marco: Bludgeons enemies with surprising rhythmic accuracy" << endl;
cout << " 5. Mauricio: Splits into multiple beings and forms a full band on his own to blast enemies with sound" << endl;
cout << " 6. Peff Dawg: Able to sleep through half the battle to avoid damage" << endl;
cout << endl << endl;
cout << " Enter your choice (1-6) : ", cin >> character;
cout << endl << endl;

//character confirmation
  if (character == 1) {
    cout << " Thank you Jocie. Now the story begins!" << endl;
  }
  if (character == 2) {
    cout << " Thank you Noah. Now the story begins!" << endl;
  }
  if (character == 3) {
    cout << " Thank you Diego. Now the story begins!" << endl;
  }
  if (character == 4) {
    cout << " Thank you Marco. Now the story begins!" << endl;
  }
  if (character == 5) {
    cout << " Thank you Mauricio. Now the story begins!" << endl;
  }
  if (character == 6) {
    cout << " Thank you Peff Dawg. Now the story begins!" << endl;
  }
  if (character < 1 || character > 6) {
    cout << " Please enter a valid number to select a character and start the game. " << endl << endl;
  }

cout << endl << endl;

// plot exposition

cout << " It was a normal rehearsal night for Goon Cocoon, with the birds and bees chirping and buzzing outside" << endl;
cout << " unbeknownst to our beloved group of traveling troubadours, due to the soundproof rehearsal room they" << endl;
cout << " had become all too familiar with. " << endl;
cout << " With the rehearsal drawing to a close, it's time to decide your next move." << endl;

cout << endl << endl;

// first choice, rehearsal
int rehearsal;

cout << " What do you do?" << endl;
cout << " 1. Run 'Butterfly'" << endl;
cout << " 2. Run 'Micro Cuts'" << endl;
cout << " 3. Write a new song" << endl;
cout << " 4. Quit the band" << endl;

cout << endl << endl;
cout << " Enter your choice (1-4) : ", cin >> rehearsal;
cout << endl << endl;

    if (rehearsal == 1) {
      cout << " You play the song as you have a thousand times before, only something feels off..." << endl;
      int butterfly;
      cout << " 1. Run it again" << endl;
      cout << " 2. Shrug it off and call it a night " << endl;

      cout << endl << endl;
      cout << " Enter your choice (1-2) : ", cin >> butterfly;
      cout << endl << endl;


          if (butterfly == 1) {
            cout << " A portal appears in the middle of the room just as the song begins, and the band's longtime pal, Watermelon Pete, " << endl;
            cout << " leaps into the room, landing deftly on the ceiling. He is still on Australian Gravity." << endl;
            cout << " 'Matt, what's this all about?' You ask." << endl;
            cout << " 'World...Ending...April...26th...Gig of Truth... BATON RO--' Matt was speaking in short, " << endl;
            cout << " out-of-breath bursts until he suddenly disappears just as quickly as he entered. Good ol' Matt." << endl;
            cout << " The band looks to you. What do you do? " << endl;
            int inevitableGig; //leads to gig, duh
              cout << " 1. Schedule a gig in Baton Rouge on April 26th " << endl;
              cout << " 2. Ask everyone why they're staring at you " << endl;
              cout << endl << endl;
              cout << " Enter your choice (1-2) : ", cin >> inevitableGig;
              cout << endl << endl;

                if (inevitableGig == 1) {
                  cout << " The band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                  cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
                } else {
                  cout << " They look at you like you're dumb, and" << endl;
                  cout << " the band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                  cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
                }
                // now heads to gig scheduling response

                cout << endl << endl;

                cout << " April 26th, 2019. Baton Rouge, Louisiana. " << endl;

                cout << endl << endl;

                cout << " 'Man, I'm so glad this gig wasn't canceled,' Jacob says, sitting up on the stage after a long nap. " <<  endl;
                cout << " 'I was really excited about it. But here we are, everyone 100% on time for a not-canceled gig.' " << endl;
                cout << " 'Yeah man, me too,' says Noah. 'If it had gotten canceled, I probably would've caught a really " << endl;
                cout << " bad case of the Big Sad.' " << endl;
                cout << " 'True,' says Marco. " << endl;
                cout << " Mauricio plays The Lick. " << endl;
                cout << " Jocie laughs and proceeds to yawn melodically. " << endl;
                cout << " 'Alright guys let's head into the green room so we can powwow before we go on stage,' you say. " << endl;
                cout << " Just as the Goons approach the door to the green room, another portal appears, " << endl;
                cout << " and a familiar face steps out onto level ground with the band. " << endl;
                cout << " 'DR. TOWELL?!?!' the band exclaims. No one saw this coming. " << endl;
                cout << " 'I heard you borrowing The Lick,' he Booms. 'Prepare to meet your doom.' " << endl;
                cout << " Gordon unleashes a barrage of standard melodies, stunning the Goons in place while he exaggerates his accent to mildly " << " annoy them. " << endl;

                cout << " The Goons: " << endl;
                cout << " 1. ATTACK!! " << endl;
                cout << " 2. Run away... " << endl;
                int actionMove;
                cout << endl << endl;
                cout << " Enter your choice (1-2) : ", cin >> actionMove;
                cout << endl << endl;
                  if (actionMove == 1) {
                      if (character == 1) {
                        cout << " You begin to sing the opening lyrics to 'Morning Glory'. Towell, taken under the spell, " << " calmly sits down and awaits the coming performance. " << endl;
                        cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                      }
                      if (character == 2) {
                        cout << " You launch into a monologue about the beauty of analog sound design and the manipulation of raw electricity. " << endl;
                        cout << " Soon Gordon hits the ground with a thud and is quietly snoring, not to be disturbed for several millennia. " << endl;
                        cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                      }
                      if (character == 3) {
                        cout << " You reach into the sound world to pull out the boomiest, thumpiest, sgnarliest basslines that have ever been bestowed upon the ears of anyone, anytime, anywhere. " << endl;
                        cout << " Gordon is shaken to his core and dissolves into atomic dust. " << endl;
                        cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                      }
                      if (character == 4) {
                        cout << " You calmly select a set of drumsticks from your arsenal and charge at Gordon head on. The proceeding battle between the two virtuosos, " << endl;
                        cout << " was so blindingly fast and over so quickly, none of the Goons were able to see what happened. " << endl;
                        cout << " You drop your drumsticks and proceed to walk out of the venue, with Gordon nowhere to be seen. " << endl;
                        cout << " 'True,' you say. 'I'm Hip.' You vanish into the black of the night. " << endl;
                        cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                      }
                      if (character == 5) {
                        cout << " You split into the Viana Septet and surround Gordon with his swing. Gordon is compelled to dance so hard that he loses control of his body, " << endl;
                        cout << " and all of your clones force him back into the portal he came out of, now reopened, but never to be seen again. " << endl;
                        cout << " 'Man, that was super dope Mauricio!' says a tree outside the venue. " << endl;
                        cout << " 'Thanks, my dude,' you say. " << endl;
                        cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                      }
                      if (character == 6) {
                        cout << " You make yourself a nice little pad on the floor and hunker down for the night. " << endl;
                        cout << " Many hours later, you awaken, with the world around you flaming and in shambles. " << endl;
                        cout << " You see Gordon's silhouette off in the distance and realizes the mistake you've made. " << endl;
                        cout << " 'I bet you'll never sleep through a gig again, eh?' says Gordon. " << endl;
                        cout << " Failure. Game Over. " << endl;
                        }
                    } else {
                      cout << " You and your bandmates try to scamper away from the towering saxophone professor, " <<endl;
                      cout << " only to have your spines dissolved by his bebop lines. " << endl;
                      cout << " Game Over. " << endl;
                  }

          } else {
            cout << " As the band leaves the comm building together, a portal appears just outside the building and a strikingly familiar" << endl;
            cout << " figure stumbles out of it, only to be immediately hurled upwards, seemingly into the sun. " << endl;
            cout << " You look at your bandmates and shrug." << endl;

            // we don't meet Matt and lose regardless
            int sunOption;
            cout << " 1. Chase after him" << endl;
            cout << " 2. Leave" << endl;

            cout << endl << endl;
            cout << " Enter your choice (1-2) : ", cin >> sunOption;
            cout << endl << endl;

                if (sunOption == 1) {
                  cout <<" You can't fly. The band takes a trip back to the dorms." << endl;
                  cout << endl << endl;
                  cout << " Fast Forward: April 26th, 2019. Baton Rouge, Louisiana." << endl;
                  cout << endl << endl;

                  cout << " A whirlpool opens in the Mississippi" << endl;
                  cout << " River and slowly engulfs the whole city. The rest of the country and the planet soon follows." << endl;
                  cout << " The Goons are no more. Game Over. " << endl;
                } else {
                  cout << " 'Hey guys, wanna get some dinner?' you ask your bandmates as you begin walking." << endl;
                  cout << endl << endl;
                  cout << " Fast Forward: April 26th, 2019. Baton Rouge, Louisiana." << endl;
                  cout << endl << endl;

                  cout << " A whirlpool opens in the Mississippi" << endl;
                  cout << " River and slowly engulfs the whole city. The rest of the country and the planet soon follows." << endl;
                  cout << " The Goons are no more. Game Over. " << endl;
                }


                }
            }//end of rehearsal 1, "butterfly"

    if (rehearsal == 2) {
      cout << " Everything sounds good until the ending, which is a miserable failure of a sorry excuse for a song ending." << endl;
      // micro cuts sucks
      cout << " You: " << endl;
      int microCuts;
      cout << " 1. Cry " << endl;
      cout << " 2. Storm out" << endl;
      cout << endl << endl;
      cout << " Enter your choice (1-2) : ", cin >> microCuts;
      cout << endl << endl;

        if (microCuts == 1) {
          cout << " As small, emo tears begin to fall, " << endl;
          cout << " A portal appears in the middle of the room just as the song begins, and the band's longtime pal, Watermelon Pete, " << endl;
          cout << " leaps into the room, landing deftly on the ceiling. He is still on Australian Gravity." << endl;
          cout << " 'Matt, what's this all about?' You ask." << endl;
          cout << " 'World...Ending...April...26th...Gig of Truth... BATON RO--' Matt was speaking in short, " << endl;
          cout << " out-of-breath bursts until he suddenly disappears just as quickly as he entered. Good ol' Matt." << endl;
          cout << " The band looks to you. What do you do? " << endl;
          int inevitableGig; //leads to gig, duh
            cout << " 1. Schedule a gig in Baton Rouge on April 26th " << endl;
            cout << " 2. Ask everyone why they're staring at you " << endl;
            cout << endl << endl;
            cout << " Enter your choice (1-2) : ", cin >> inevitableGig;
            cout << endl << endl;

              if (inevitableGig == 1) {
                cout << " The band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              } else {
                cout << " They look at you like you're dumb, and" << endl;
                cout << " the band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              }
              // now heads to gig scheduling response

              cout << endl << endl;

              cout << " April 26th, 2019. Baton Rouge, Louisiana. " << endl;

              cout << endl << endl;

              cout << " 'Man, I'm so glad this gig wasn't canceled,' Jacob says, sitting up on the stage after a long nap. " <<  endl;
              cout << " 'I was really excited about it. But here we are, everyone 100% on time for a not-canceled gig.' " << endl;
              cout << " 'Yeah man, me too,' says Noah. 'If it had gotten canceled, I probably would've caught a really " << endl;
              cout << " bad case of the Big Sad.' " << endl;
              cout << " 'True,' says Marco. " << endl;
              cout << " Mauricio plays The Lick. " << endl;
              cout << " Jocie laughs and proceeds to yawn melodically. " << endl;
              cout << " 'Alright guys let's head into the green room so we can powwow before we go on stage,' you say. " << endl;
              cout << " Just as the Goons approach the door to the green room, another portal appears, " << endl;
              cout << " and a familiar face steps out onto level ground with the band. " << endl;
              cout << " 'DR. TOWELL?!?!' the band exclaims. No one saw this coming. " << endl;
              cout << " 'I heard you borrowing The Lick,' he Booms. 'Prepare to meet your doom.' " << endl;
              cout << " Gordon unleashes a barrage of standard melodies, stunning the Goons in place while he exaggerates his accent to mildly " << " annoy them. " << endl;

              cout << " The Goons: " << endl;
              cout << " 1. ATTACK!! " << endl;
              cout << " 2. Run away... " << endl;
              int actionMove;
              cout << endl << endl;
              cout << " Enter your choice (1-2) : ", cin >> actionMove;
              cout << endl << endl;
              if (actionMove == 1) {
                  if (character == 1) {
                    cout << " You begin to sing the opening lyrics to 'Morning Glory'. Towell, taken under the spell, " << " calmly sits down and awaits the coming performance. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 2) {
                    cout << " You launch into a monologue about the beauty of analog sound design and the manipulation of raw electricity. " << endl;
                    cout << " Soon Gordon hits the ground with a thud and is quietly snoring, not to be disturbed for several millennia. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 3) {
                    cout << " You reach into the sound world to pull out the boomiest, thumpiest, sgnarliest basslines that have ever been bestowed upon the ears of anyone, anytime, anywhere. " << endl;
                    cout << " Gordon is shaken to his core and dissolves into atomic dust. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 4) {
                    cout << " You calmly select a set of drumsticks from your arsenal and charge at Gordon head on. The proceeding battle between the two virtuosos, " << endl;
                    cout << " was so blindingly fast and over so quickly, none of the Goons were able to see what happened. " << endl;
                    cout << " You drop your drumsticks and proceed to walk out of the venue, with Gordon nowhere to be seen. " << endl;
                    cout << " 'True,' you say. 'I'm Hip.' You vanish into the black of the night. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 5) {
                    cout << " You split into the Viana Septet and surround Gordon with his swing. Gordon is compelled to dance so hard that he loses control of his body, " << endl;
                    cout << " and all of your clones force him back into the portal he came out of, now reopened, but never to be seen again. " << endl;
                    cout << " 'Man, that was super dope Mauricio!' says a tree outside the venue. " << endl;
                    cout << " 'Thanks, my dude,' you say. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 6) {
                    cout << " You make yourself a nice little pad on the floor and hunker down for the night. " << endl;
                    cout << " Many hours later, you awaken, with the world around you flaming and in shambles. " << endl;
                    cout << " You see Gordon's silhouette off in the distance and realizes the mistake you've made. " << endl;
                    cout << " 'I bet you'll never sleep through a gig again, eh?' says Gordon. " << endl;
                    cout << " Failure. Game Over. " << endl;
                    }
                } else {
                  cout << " You and your bandmates try to scamper away from the towering saxophone professor, " <<endl;
                  cout << " only to have your spines dissolved by his bebop lines. " << endl;
                  cout << " Game Over. " << endl;
                  }
                system ("CLS");
                cout <<flush; //flush forces the printing to the screen before it clears
                system ("CLS");


        } else {
          cout << " Just as you're about to walk out of the room in frustration, " << endl;
          cout << " A portal appears in the middle of the room just as the song begins, and the band's longtime pal, Watermelon Pete, " << endl;
          cout << " leaps into the room, landing deftly on the ceiling. He is still on Australian Gravity." << endl;
          cout << " 'Matt, what's this all about?' You ask." << endl;
          cout << " 'World...Ending...April...26th...Gig of Truth... BATON RO--' Matt was speaking in short, " << endl;
          cout << " out-of-breath bursts until he suddenly disappears just as quickly as he entered. Good ol' Matt." << endl;
          cout << " The band looks to you. What do you do? " << endl;
          int inevitableGig; //leads to gig, duh
            cout << " 1. Schedule a gig in Baton Rouge on April 26th " << endl;
            cout << " 2. Ask everyone why they're staring at you " << endl;
            cout << endl << endl;
            cout << " Enter your choice (1-2) : ", cin >> inevitableGig;
            cout << endl << endl;

              if (inevitableGig == 1) {
                cout << " The band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              } else {
                cout << " They look at you like you're dumb, and" << endl;
                cout << " the band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              }
        }
        // now heads to gig scheduling response

        cout << endl << endl;

        cout << " April 26th, 2019. Baton Rouge, Louisiana. " << endl;

        cout << endl << endl;

        cout << " 'Man, I'm so glad this gig wasn't canceled,' Jacob says, sitting up on the stage after a long nap. " <<  endl;
        cout << " 'I was really excited about it. But here we are, everyone 100% on time for a not-canceled gig.' " << endl;
        cout << " 'Yeah man, me too,' says Noah. 'If it had gotten canceled, I probably would've caught a really " << endl;
        cout << " bad case of the Big Sad.' " << endl;
        cout << " 'True,' says Marco. " << endl;
        cout << " Mauricio plays The Lick. " << endl;
        cout << " Jocie laughs and proceeds to yawn melodically. " << endl;
        cout << " 'Alright guys let's head into the green room so we can powwow before we go on stage,' you say. " << endl;
        cout << " Just as the Goons approach the door to the green room, another portal appears, " << endl;
        cout << " and a familiar face steps out onto level ground with the band. " << endl;
        cout << " 'DR. TOWELL?!?!' the band exclaims. No one saw this coming. " << endl;
        cout << " 'I heard you borrowing The Lick,' he Booms. 'Prepare to meet your doom.' " << endl;
        cout << " Gordon unleashes a barrage of standard melodies, stunning the Goons in place while he exaggerates his accent to mildly " << " annoy them. " << endl;

        cout << " The Goons: " << endl;
        cout << " 1. ATTACK!! " << endl;
        cout << " 2. Run away... " << endl;
        int actionMove;
        cout << endl << endl;
        cout << " Enter your choice (1-2) : ", cin >> actionMove;
        cout << endl << endl;
        if (actionMove == 1) {
            if (character == 1) {
              cout << " You begin to sing the opening lyrics to 'Morning Glory'. Towell, taken under the spell, " << " calmly sits down and awaits the coming performance. " << endl;
              cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
            }
            if (character == 2) {
              cout << " You launch into a monologue about the beauty of analog sound design and the manipulation of raw electricity. " << endl;
              cout << " Soon Gordon hits the ground with a thud and is quietly snoring, not to be disturbed for several millennia. " << endl;
              cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
            }
            if (character == 3) {
              cout << " You reach into the sound world to pull out the boomiest, thumpiest, sgnarliest basslines that have ever been bestowed upon the ears of anyone, anytime, anywhere. " << endl;
              cout << " Gordon is shaken to his core and dissolves into atomic dust. " << endl;
              cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
            }
            if (character == 4) {
              cout << " You calmly select a set of drumsticks from your arsenal and charge at Gordon head on. The proceeding battle between the two virtuosos, " << endl;
              cout << " was so blindingly fast and over so quickly, none of the Goons were able to see what happened. " << endl;
              cout << " You drop your drumsticks and proceed to walk out of the venue, with Gordon nowhere to be seen. " << endl;
              cout << " 'True,' you say. 'I'm Hip.' You vanish into the black of the night. " << endl;
              cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
            }
            if (character == 5) {
              cout << " You split into the Viana Septet and surround Gordon with his swing. Gordon is compelled to dance so hard that he loses control of his body, " << endl;
              cout << " and all of your clones force him back into the portal he came out of, now reopened, but never to be seen again. " << endl;
              cout << " 'Man, that was super dope Mauricio!' says a tree outside the venue. " << endl;
              cout << " 'Thanks, my dude,' you say. " << endl;
              cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
            }
            if (character == 6) {
              cout << " You make yourself a nice little pad on the floor and hunker down for the night. " << endl;
              cout << " Many hours later, you awaken, with the world around you flaming and in shambles. " << endl;
              cout << " You see Gordon's silhouette off in the distance and realizes the mistake you've made. " << endl;
              cout << " 'I bet you'll never sleep through a gig again, eh?' says Gordon. " << endl;
              cout << " Failure. Game Over. " << endl;
              }
          } else {
            cout << " You and your bandmates try to scamper away from the towering saxophone professor, " <<endl;
            cout << " only to have your spines dissolved by his bebop lines. " << endl;
            cout << " Game Over. " << endl;
          }

    }// end of rehearsal 2, "microcuts"

    if (rehearsal == 3) {
      cout << " You suggest writing a new tune. Someone leaps forward with multiple new ideas, sending a flurry of papers " << endl;
      cout << " across the room in all directions, some at unintentionally lethal speeds, which is up to you and the rest " << endl;
      cout << " of the band to dodge for fear of being paper cut to death. " << endl;
      cout << endl << endl;
      cout << " DODGE!! " << endl;
      int dodge;
      cout << " 1. Left " << endl;
      cout << " 2. Right " << endl;
      cout << " 3. Up " << endl;
      cout << " 4. Down " << endl;
      cout << endl << endl;
      cout << " Enter your choice (1-4) : ", cin >> dodge;
      cout << endl << endl;

        if (dodge == 1 || dodge == 2) {
          cout << " You crouch behind some equipment and hide until the paper monsoon is over. As you peek out into the room again, " << endl;
          cout << " a portal appears in the middle of the room just as the song begins, and the band's longtime pal, Watermelon Pete, " << endl;
          cout << " leaps into the room, landing deftly on the ceiling. He is still on Australian Gravity." << endl;
          cout << " 'Matt, what's this all about?' You ask." << endl;
          cout << " 'World...Ending...April...26th...Gig of Truth... BATON RO--' Matt was speaking in short, " << endl;
          cout << " out-of-breath bursts until he suddenly disappears just as quickly as he entered. Good ol' Matt." << endl;
          cout << " The band looks to you. What do you do? " << endl;
          int inevitableGig; //leads to gig, duh
            cout << " 1. Schedule a gig in Baton Rouge on April 26th " << endl;
            cout << " 2. Ask everyone why they're staring at you " << endl;
            cout << endl << endl;
            cout << " Enter your choice (1-2) : ", cin >> inevitableGig;
            cout << endl << endl;

              if (inevitableGig == 1) {
                cout << " The band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              } else {
                cout << " They look at you like you're dumb, and" << endl;
                cout << " the band agrees to play a show on the 26th, with shaky hope that Matt was onto something, " << endl;
                cout << " and not just suffering from an Australian-heat-induced-fever-dream. " << endl;
              }
              // now heads to gig scheduling response

              cout << endl << endl;

              cout << " April 26th, 2019. Baton Rouge, Louisiana. " << endl;

              cout << endl << endl;

              cout << " 'Man, I'm so glad this gig wasn't canceled,' Jacob says, sitting up on the stage after a long nap. " <<  endl;
              cout << " 'I was really excited about it. But here we are, everyone 100% on time for a not-canceled gig.' " << endl;
              cout << " 'Yeah man, me too,' says Noah. 'If it had gotten canceled, I probably would've caught a really " << endl;
              cout << " bad case of the Big Sad.' " << endl;
              cout << " 'True,' says Marco. " << endl;
              cout << " Mauricio plays The Lick. " << endl;
              cout << " Jocie laughs and proceeds to yawn melodically. " << endl;
              cout << " 'Alright guys let's head into the green room so we can powwow before we go on stage,' you say. " << endl;
              cout << " Just as the Goons approach the door to the green room, another portal appears, " << endl;
              cout << " and a familiar face steps out onto level ground with the band. " << endl;
              cout << " 'DR. TOWELL?!?!' the band exclaims. No one saw this coming. " << endl;
              cout << " 'I heard you borrowing The Lick,' he Booms. 'Prepare to meet your doom.' " << endl;
              cout << " Gordon unleashes a barrage of standard melodies, stunning the Goons in place while he exaggerates his accent to mildly " << " annoy them. " << endl;

              cout << " The Goons: " << endl;
              cout << " 1. ATTACK!! " << endl;
              cout << " 2. Run away... " << endl;
              int actionMove;
              cout << endl << endl;
              cout << " Enter your choice (1-2) : ", cin >> actionMove;
              cout << endl << endl;
              if (actionMove == 1) {
                  if (character == 1) {
                    cout << " You begin to sing the opening lyrics to 'Morning Glory'. Towell, taken under the spell, " << " calmly sits down and awaits the coming performance. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 2) {
                    cout << " You launch into a monologue about the beauty of analog sound design and the manipulation of raw electricity. " << endl;
                    cout << " Soon Gordon hits the ground with a thud and is quietly snoring, not to be disturbed for several millennia. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 3) {
                    cout << " You reach into the sound world to pull out the boomiest, thumpiest, sgnarliest basslines that have ever been bestowed upon the ears of anyone, anytime, anywhere. " << endl;
                    cout << " Gordon is shaken to his core and dissolves into atomic dust. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 4) {
                    cout << " You calmly select a set of drumsticks from your arsenal and charge at Gordon head on. The proceeding battle between the two virtuosos, " << endl;
                    cout << " was so blindingly fast and over so quickly, none of the Goons were able to see what happened. " << endl;
                    cout << " You drop your drumsticks and proceed to walk out of the venue, with Gordon nowhere to be seen. " << endl;
                    cout << " 'True,' you say. 'I'm Hip.' You vanish into the black of the night. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 5) {
                    cout << " You split into the Viana Septet and surround Gordon with his swing. Gordon is compelled to dance so hard that he loses control of his body, " << endl;
                    cout << " and all of your clones force him back into the portal he came out of, now reopened, but never to be seen again. " << endl;
                    cout << " 'Man, that was super dope Mauricio!' says a tree outside the venue. " << endl;
                    cout << " 'Thanks, my dude,' you say. " << endl;
                    cout << " VICTORY!!" << " Congratulations on beating the game! " << endl;
                  }
                  if (character == 6) {
                    cout << " You make yourself a nice little pad on the floor and hunker down for the night. " << endl;
                    cout << " Many hours later, you awaken, with the world around you flaming and in shambles. " << endl;
                    cout << " You see Gordon's silhouette off in the distance and realizes the mistake you've made. " << endl;
                    cout << " 'I bet you'll never sleep through a gig again, eh?' says Gordon. " << endl;
                    cout << " Failure. Game Over. " << endl;
                    }
                } else {
                  cout << " You and your bandmates try to scamper away from the towering saxophone professor, " <<endl;
                  cout << " only to have your spines dissolved by his bebop lines. " << endl;
                  cout << " Game Over. " << endl;
                }

        } else {
          cout << " You get hit in the face and slowly watch as the light fades from your vision. The Goons will forever mourn this loss, " << endl;
          cout << " and implement new songwriting safety policies. " << endl;
          cout << endl << endl;
          cout << " Fast Forward: April 26th, 2019. Baton Rouge, Louisiana." << endl;
          cout << endl << endl;

          cout << " A whirlpool opens in the Mississippi" << endl;
          cout << " River and slowly engulfs the whole city. The rest of the country and the planet soon follows." << endl;
          cout << " The Goons are no more. Game Over. " << endl;
        }
    } // end of rehearsal 3, new song

    if (rehearsal == 4) {
        cout << " Everyone is sad and the rehearsal ends. You go home wondering if you made the right decision." << endl;

        cout << endl << endl;
        cout << " Fast Forward: April 26th, 2019. Baton Rouge, Louisiana." << endl;
        cout << endl << endl;

        cout << " A whirlpool opens in the Mississippi" << endl;
        cout << " River and slowly engulfs the whole city. The rest of the country and the planet soon follows." << endl;
        cout << " The Goons are no more. Game Over. " << endl;
      }// end of rehearsal 4, quit

  return 0;
}

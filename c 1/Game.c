#include <stdio.h>

int main()
{
    char name, button, newline;

    printf("Hey Player, Please Enter Your Name: ");
    scanf(" %c", &name);

    printf("\nHello %c, you are a brave adventurer who has heard rumors of a priceless treasure hidden deep within a cave, guarded by a fierce dragon. Determined to claim the treasure for yourself, you set off on a perilous journey through the dark and treacherous cave.\n", name);

    newline = getchar();

again:
    printf("\nPlease Enter 'F' to Start The game: ");
    scanf(" %c", &button);

    if (button == 'F' || button == 'f')
    {
        printf("\nThe game has started. You are at the entrance of the cave.");

        newline = getchar();

        printf("\n\nPlease choose 'F' to enter the cave or 'Z' to turn back: ");
        scanf(" %c", &button);

        if (button == 'F' || button == 'f')
        {
            printf("\nYou entered the Cave.");

            printf("\nNow You encounter a fork in the path.");

            newline = getchar();
        forkPath:
            printf("\nChoose 'L' to go left and 'R' to go right: ");
            scanf(" %c", &button);

            // The Dark tunnel
            if (button == 'L' || button == 'l')
            {
                printf("\nYou entered the dark tunnel.");
                printf("\nYou have encountered a pack of hungry wolves.");

                newline = getchar();
                printf("\nchoose f to Fight with wolves or r to Run back to fork path: ");
                scanf(" %c", &button);
                if (button == 'f' || button == 'F')
                {
                    printf("\nYou choose to fight, you defeat the wolves and discover a hidden chamber.");
                    printf("\nInside the Chamber, you find the mysterious key,\nPress 'T' to Take the key or 'L' to Leave it");

                    newline = getchar();
                    printf("\nEnter your choice (T/L): ");
                    scanf(" %c", &button);
                    if (button == 'T' || button == 't')
                    {
                        printf("\nYou take the key with you.");
                        // Move to Scene 5: The Dragon's Lair
                        printf("\nYou continue your journey deeper into the cave.");

                        newline = getchar();
                        printf("\nYou eventually reach the Dragon's Lair.");
                        printf("\nThe dragon guards the treasure fiercely.");

                        printf("\nChoose 'F' to Fight the dragon or 'S' to Sneak past it: ");
                        scanf(" %c", &button);
                        if (button == 'F' || button == 'f')
                        {
                            // Fight the dragon
                            printf("\nYou choose to fight the dragon.");
                            printf("\nAfter a fierce battle, you defeat the dragon and claim the treasure!");

                            printf("\nCongratulations, you emerge from the cave victorious!");
                            printf("\nYou are declared the greatest adventurer in the land!");
                        }
                        else if (button == 'S' || button == 's')
                        {
                            // Sneak past the dragon
                            printf("\nYou choose to sneak past the dragon.");
                            printf("\nWith stealth and cunning, you successfully steal the treasure without waking the dragon.");

                            printf("\nYou escape from the cave with the treasure!");
                            printf("\nCongratulations, you are declared the greatest adventurer in the land!");
                        }
                        else
                        {
                            printf("\nInvalid choice.");
                        }
                    }
                    else if (button == 'L' || button == 'l')
                    {
                        printf("\nYou leave the key behind.");
                        printf("\nYou decide to explore further into the cave.");

                        // Move to Scene 5: The Dragon's Lair
                        printf("\nYou continue your journey deeper into the cave.");

                        newline = getchar();
                        printf("\nYou eventually reach the Dragon's Lair.");
                        printf("\nThe dragon guards the treasure fiercely.");

                        printf("\nChoose 'F' to Fight the dragon or 'S' to Sneak past it: ");
                        scanf(" %c", &button);
                        if (button == 'F' || button == 'f')
                        {
                            // Fight the dragon
                            printf("\nYou choose to fight the dragon.");
                            printf("\nAfter a fierce battle, you defeat the dragon and claim the treasure!");

                            printf("\nCongratulations, you emerge from the cave victorious!");
                            printf("\nYou are declared the greatest adventurer in the land!");
                        }
                        else if (button == 'S' || button == 's')
                        {
                            // Sneak past the dragon
                            printf("\nYou choose to sneak past the dragon.");
                            printf("\nWith stealth and cunning, you successfully steal the treasure without waking the dragon.");

                            printf("\nYou escape from the cave with the treasure!");
                            printf("\nCongratulations, you are declared the greatest adventurer in the land!");
                        }
                        else
                        {
                            printf("\nInvalid choice.");
                        }
                    }
                    else
                    {
                        printf("\nInvalid choice.");
                    }
                }
                else if (button == 'r' || button == 'R')
                {
                    printf("\nYou choose to run back to the fork path.");
                    goto forkPath;
                }
                else
                {
                    printf("\nInvalid choice.");
                }
            }
            // The Mysterious Chamber
            else if (button == 'R' || button == 'r')
            {
                printf("\nYou entered The Mysterious Chamber.");
                printf("\nInside the chamber, you find ancient artifacts and glowing runes.");
                m1 :
                printf("\nChoose 'I' to Inspect the artifacts or 'E' to Examine the runes: ");

                newline = getchar();
                scanf(" %c", &button);
                if (button == 'I' || button == 'i')
                {
                    printf("\nYou inspect the artifacts and discover a hidden switch.");
                    printf("\nActivating the switch reveals a secret passage guarded by a stone statue.");

                    newline = getchar();
                    printf("\nYou face the stone statue, which challenges you with a riddle:");
                    printf("\n\"I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?\"");


                }
                else if (button == 'E' || button == 'e')
                {
                    printf("\nYou examine the runes and discover ancient symbols of power.");
                    printf("\nYou feel a surge of energy coursing through you, empowering you for the challenges ahead.");
                }
                else
                {
                    printf("\nInvalid choice.");
                    goto m1;
                }
            }
        }
        else if (button == 'Z' || button == 'z')
        {
            printf("\nYou turned back.");
            goto again;
        }
        else
        {
            printf("\nInvalid choice.");
            goto again;
        }
    }
    else
    {
        printf("\nYou Have entered Wrong Button.");
    }

    return 0;
}

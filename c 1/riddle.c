#include <stdio.h>
#include <string.h>

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

                // Riddles for the Dark Tunnel
                printf("\nAs you walk deeper into the darkness, you hear a voice:");
                printf("\n\"The more you take, the more you leave behind. What am I?\"");
                printf("\nEnter your answer: ");
                char answer[50];
                scanf("%s", answer);
                if (strcmp(answer, "footsteps") == 0)
                {
                    printf("\nCorrect! The voice fades away, and you proceed.");
                }
                else
                {
                    printf("\nIncorrect! You feel a chill down your spine.");
                    printf("\nAnother voice whispers: \"What has keys but can't open locks?\"");
                    printf("\nEnter your answer: ");
                    scanf("%s", answer);
                    if (strcmp(answer, "piano") == 0)
                    {
                        printf("\nWell done! You sense relief and continue.");
                    }
                    else
                    {
                        printf("\nWrong again! You hear growls in the distance.");
                        printf("\nA final riddle comes: \"What is always in front of you but can't be seen?\"");
                        printf("\nEnter your answer: ");
                        scanf("%s", answer);
                        if (strcmp(answer, "future") == 0)
                        {
                            printf("\nImpressive! The growls fade away, and you advance.");
                        }
                        else
                        {
                            printf("\nIncorrect once more! Darkness surrounds you.");
                            printf("\nYou must restart from the beginning.");
                            goto again;
                        }
                    }
                }
            }
            // The Mysterious Chamber
            else if (button == 'R' || button == 'r')
            {
                printf("\nYou entered The Mysterious Chamber.");

                // Riddles for the Mysterious Chamber
                printf("\nIn the chamber's dim light, a voice echoes:");
                printf("\n\"I'm not alive, but I can grow. I don't have lungs, but I need air. What am I?\"");
                printf("\nEnter your answer: ");
                char answer[50];
                scanf("%s", answer);
                if (strcmp(answer, "fire") == 0)
                {
                    printf("\nWell done! The voice seems pleased, and you explore further.");
                }
                else
                {
                    printf("\nIncorrect! The voice becomes solemn.");
                    printf("\nAnother riddle emerges: \"The more you take, the more you leave behind. What am I?\"");
                    printf("\nEnter your answer: ");
                    scanf("%s", answer);
                    if (strcmp(answer, "footsteps") == 0)
                    {
                        printf("\nCorrect! You sense approval and continue.");
                    }
                    else
                    {
                        printf("\nWrong again! The chamber darkens.");
                        printf("\nA final riddle surfaces: \"What has keys but can't open locks?\"");
                        printf("\nEnter your answer: ");
                        scanf("%s", answer);
                        if (strcmp(answer, "piano") == 0)
                        {
                            printf("\nImpressive! The darkness recedes, and you press onward.");
                        }
                        else
                        {
                            printf("\nIncorrect once more! You feel a sense of foreboding.");
                            printf("\nYou must restart from the beginning.");
                            goto again;
                        }
                    }
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
        }
    }
    else
    {
        printf("\nYou Have entered Wrong Button.");
        goto again;
    }

    return 0;
}

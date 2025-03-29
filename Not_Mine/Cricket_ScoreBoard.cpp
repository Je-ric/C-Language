#include <stdio.h>

#include <string.h>

#include <stdlib.h>
// void GetNewScoreSheet();
// void ViewScoreSheet();
main()
{
    char competition[100], venue[100], matchParticipant1[100], matchParticipant2[100], Date[10], batsmenNames[10][100], bowlerNames[10][100], tossWonBy[100], electedTo[100];
    int i, p, inningsNumber, totalRuns[11], fours[11], sixers[11], overs[8], maidens[8], ballsByBowlers[8], runsByBowlers[8], choice, continueChoice;
    printf("Enter Competition Name\n");
    fflush(stdin);
    gets(competition);
    printf("Enter Venue Name\n");
    fflush(stdin);
    gets(venue);
    printf("Enter Country 1 Name\n");
    fflush(stdin);
    gets(matchParticipant1);
    printf("Enter Country 2 Name\n");
    fflush(stdin);
    gets(matchParticipant2);
    printf("Enter Date\n");
    fflush(stdin);
    scanf("%s", Date);
    printf("Enter Innings Number\n");
    scanf("%d", &inningsNumber);
    printf("Enter Toss Won By\n");
    fflush(stdin);
    gets(tossWonBy);
    printf("Enter Elected To\n");
    fflush(stdin);
    gets(electedTo);
    printf("Enter 11 Batsmen names\n");
    for (i = 0; i < 11; i++)
    {
        printf("Enter %d Batsman Name\n", i + 1);
        fflush(stdin);
        gets(batsmenNames[i]);
        if (strlen(batsmenNames[i]) < 16)
        {
            // If name is lesser than 16 characters then the name will be appended with spaces //Because to make the table look good for viewing sore sheet for(p=strlen(batsmenNames[i]);p<=16;p++) batsmenNames[i][p]=' ';
        }
        else
        {
            // To Limit the name like if the name extends more than 16 then the name will be appended with 3 dots int q=0;
            for (p = 15; p < strlen(batsmenNames[i]) && q <= 2; p++, q++)
                batsmenNames[i][p] = '.';
        }
        batsmenNames[i][p] = '\0';
        totalRuns[i] = 0;
        fours[i] = 0;
        sixers[i] = 0;
    }
    printf("Enter 8 Bowler names\n");
    for (i = 0; i < 8; i++)
    {
        printf("Enter %d Bowler Name\n", i + 1);
        fflush(stdin);
        gets(bowlerNames[i]);
        if (strlen(bowlerNames[i]) < 15)
        {
            for (p = strlen(bowlerNames[i]); p <= 15; p++)
                bowlerNames[i][p] = ' ';
        }
        else
        {
            int q = 0;
            for (p = 15; p < strlen(bowlerNames[i]) && q <= 2; p++, q++)
                bowlerNames[i][p] = '.';
        }
        bowlerNames[i][p] = '\0';
        overs[i] = 0;
        maidens[i] = 0;
        ballsByBowlers[i] = 0;
        runsByBowlers[i] = 0;
    }
    do
    {
        printf("Enter\n1.New ScoreSheet\n2.View ScoreSheet\n3.Exit from Program\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            // GetNewScoreSheet();
            int subChoice;
            printf("Enter\n1.To Update Batsmen Details\n2.To Update Bowler Details\n");
            scanf("%d", &subChoice);
            if (subChoice == 1)
            {
                int batsmanId, runsToAdd, fourToAdd, sixersToAdd, runsChoice;
                printf("Enter 1 for 1st batsman or 2 or 3 till 11 etc to update corresponding Batsmen Details\n");
                scanf("%d", &batsmanId);
                batsmanId -= 1;
                // Since arrays starts from 0 if(batsmanId<=10 && batsmanId>=0)
                {
                    printf("Enter\n1. To Add Normal Runs\n2.To Add Fours\n3.To Add Sixers\n");
                    scanf("%d", &runsChoice);
                    if (runsChoice == 1)
                    {
                        printf("Enter number of runs to be added for %s \n", batsmenNames[batsmanId]);
                        scanf("%d", &runsToAdd);
                        totalRuns[batsmanId] += runsToAdd;
                    }
                    else if (runsChoice == 2)
                    {
                        printf("Enter number of Fours to be added for %s \n", batsmenNames[batsmanId]);
                        scanf("%d", &fourToAdd);
                        totalRuns[batsmanId] += fourToAdd * 4;
                        fours[batsmanId] += fourToAdd;
                    }
                    else if (runsChoice == 3)
                    {
                        printf("Enter number of Sixers to be added for %s \n", batsmenNames[batsmanId]);
                        scanf("%d", &sixersToAdd);
                        totalRuns[batsmanId] += sixersToAdd * 6;
                        sixers[batsmanId] += sixersToAdd;
                    }
                    else
                    {
                        printf("Enter Valid Choice\n");
                    }
                }
                else
                {
                    printf("Enter Batsman Id from 1 to 11\n");
                }
            }
            else if (subChoice == 2)
            {
                int bowlerId, numOfOversToAdd, maidensToAdd, ballsToAdd, runsGiven;
                printf("Enter 1 for 1st Bowler or 2 or 3 till 8 etc to update corresponding Bowler Details\n");
                scanf("%d", &bowlerId);
                bowlerId -= 1;
                // Since Array starts from 0 if(bowlerId>=0 && bowlerId<=7)
                {
                    printf("Enter Number of Overs to be added for %s\n", bowlerNames[bowlerId]);
                    scanf("%d", &numOfOversToAdd);
                    overs[bowlerId] += numOfOversToAdd;
                    printf("Enter Number of Maidens to be added for %s.Zero for not to add\n", bowlerNames[bowlerId]);
                    scanf("%d", &maidensToAdd);
                    maidens[bowlerId] += maidensToAdd;
                    printf("Enter Number of balls to be added for %s.Zero for not to add\n", bowlerNames[bowlerId]);
                    scanf("%d", &ballsToAdd);
                    ballsByBowlers[bowlerId] += ballsToAdd;
                    printf("Enter Number of runs given by %s.Zero for not to add\n", bowlerNames[bowlerId]);
                    scanf("%d", &runsGiven);
                    runsByBowlers[bowlerId] += runsGiven;
                }
                else
                {
                    printf("Please Enter Bowler Id from 1 to 8\n");
                }
            }
            else
            {
                printf("Enter Valid Choice\n");
            }
            break;
        }
        case 2:
        {
            // ViewScoreSheet();
            printf("Competition Name : %s\n", competition);
            printf("Venue : %s\n", venue);
            printf("Match Between : %s\n", matchParticipant1);
            printf("Versus : %s\n", matchParticipant2);
            printf("Toss Won By : %s\n", tossWonBy);
            printf("Elected To : %s\n", electedTo);
            printf("Innings Of : %d\n", inningsNumber);
            printf("Date : %s\n", Date);
            printf("----BatsmanName----||--Total Runs--||--4s--||--6s--\n");
            for (i = 0; i < 11; i++)
            {
                printf("%s\t %d \t %d\t%d\n", batsmenNames[i], totalRuns[i], fours[i], sixers[i]);
            }
            printf("----BowlerName-----||--Overs--||--Maidens--||--Balls--||--RunsGiven--\n");
            for (i = 0; i < 8; i++)
            {
                printf("%s\t%d \t %d \t%d \t %d\n", bowlerNames[i], overs[i], maidens[i], ballsByBowlers[i], runsByBowlers[i]);
            }
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Enter valid Choice\n");
            break;
        }
        }
        printf("Press 1 if match is not yet over to Add scores else any other number to Exit\n");
        scanf("%d", &continueChoice);

    } while (continueChoice == 1);
}

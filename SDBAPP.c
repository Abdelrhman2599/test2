#include "SDB.c"

int32 choice;


void SDB_action (int32 choice)
{
 switch(choice)
        {
        case 1:
               {
                    SDB_AddEntry();


                 break;
               }
            case 2:
               {
                    SDB_GetUsedSize();


                 break;
               }
            case 3:
               {
                     SDB_ReadEntry ();



                break;
                }
            case 4:
                {
                     SDB_GetList ();



                  break;
                }
            case 5:
                {
                     SDB_IsIdExist ();



                  break;
                }
            case 6:
                {
                     SDB_DeletEntry ();


                   break;
                }
            case 7:
                {
                     SDB_IsFull ();

                   break;
                }

            case 0:
                {
                     exit(0);
                   break;
                }
            default:;


        }
}

void SDB_APP()
{


      while(1)
       {



        printf("The Task that you "
               "want to perform\n");
        printf("To add entry, enter 1\n"
               "To get used size in database, enter 2\n"
               "To read student data, enter 3\n"
               "To get the list of all student IDs, enter 4\n"
               "To check if ID exists, enter 5\n"
               "To delete student data, enter 6\n"
               "To check is database is full, enter 7\n"
               "To exit enter 0\n");

        scanf("%d", &choice);
        SDB_action(choice);

}
}

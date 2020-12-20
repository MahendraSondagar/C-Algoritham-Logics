#include <stdio.h>
#include <stdint.h>

typedef enum
{
    Idle_State            =1,
    Card_Inserted_State   =2,
    Pin_Eentered_State    =3,
    Option_Selected_State =4,
    Amount_Entered_State  =5,
} POS_MachineSate_t;
//Different type events
typedef enum
{
    Card_Insert_Event     =1,
    Pin_Enter_Event       =2,
    Option_Selection_Event=3,
    Amount_Enter_Event    =4,
    Amount_Dispatch_Event =5
} POS_Machine_event_t;
//Prototype of eventhandlers
POS_MachineSate_t AmountDispatchHandler(void)
{
    printf("Idle state\r\n");
    return Idle_State;
}
POS_MachineSate_t EnterAmountHandler(void)
{
    printf("Amount enterd state\r\n");
    return Amount_Entered_State;
}
POS_MachineSate_t OptionSelectionHandler(void)
{
    printf("Option selected state\r\n");
    return Option_Selected_State;
}
POS_MachineSate_t EnterPinHandler(void)
{
    printf("Pin enterd state\r\n");
    return Pin_Eentered_State;
}
POS_MachineSate_t InsertCardHandler(void)
{
    printf("Card inserted state\r\n");
    return Card_Inserted_State;
}


POS_Machine_event_t ReadEvent()
{
   int i=0;
   printf("Enter the external event: ");
   scanf("%d", &i);
   if(i>=1 && i <= 5)
   {
       return i;
   }
   else
   {
       printf("Wrong input!\r\n");
   }
   
}
int main(void)
{
    printf("Welcome to the secure satte machine using c \r\n");
    POS_MachineSate_t eNextState = Idle_State;
    POS_Machine_event_t eNewEvent;
    while(1)
    {
        //Read system Events
        POS_Machine_event_t eNewEvent = ReadEvent();
        switch(eNextState)
        {
        case Idle_State:
        {
            if(Card_Insert_Event == eNewEvent)
            {
                eNextState = InsertCardHandler();
            }
        }
        break;
        case Card_Inserted_State:
        {
            if(Pin_Enter_Event == eNewEvent)
            {
                eNextState = EnterPinHandler();
            }
        }
        break;
        case Pin_Eentered_State:
        {
            if(Option_Selection_Event == eNewEvent)
            {
                eNextState = OptionSelectionHandler();
            }
        }
        break;
        case Option_Selected_State:
        {
            if(Amount_Enter_Event == eNewEvent)
            {
                eNextState = EnterAmountHandler();
            }
        }
        break;
        case Amount_Entered_State:
        {
            if(Amount_Dispatch_Event == eNewEvent)
            {
                eNextState = AmountDispatchHandler();
            }
        }
        break;
        default:
            break;
        }
    }
    return 0;
}

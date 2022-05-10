#include<iostream>
using namespace std;

int MochaCount;
int turtleSwirlCount;
int ByeType;
int BuyStuff;
int PreviewCoffee;
int PreviewPastry;
int PreviewSnacks;
int Money = 1000;
int CaramelCount;
int StraberryDanishCount;
int CinnimonRollCount;
int ApplePieCount;
int EggpocketCount;
int McmuffinCount;
int MiniOmeletCount;
int Yes;
int main(){
        cout<<"\nHey You welcome to Hearts Cafe."<<endl;
        cout<<"\nOur menu Starts in perffible order, from coffee, to pastrys, then last snacks"<<endl;
        cout<<"\nLets get Started shall we."<<endl;
    
    while (1 != 0){
        
        cout<<"Would you like to preview the Coffees we have in the shop? (Answer 1 for Yes, answer 2 for no,to go to pasterys, 3 to see how much money you have, or 4 to check stock.) ";
        cin>>PreviewCoffee;
        if (PreviewCoffee == 1){
            cout<<"here is our coffee selections...";
            cout<<"\nMocha: $10";
            cout<<"\nturtleSwirl: $14";
            cout<<"\nCaramel: $10";
            cout<<"\n\nWould you like to buy anything from our coffee section? (Answer 1 for Yes or 2 for no) ";
            cin>>BuyStuff;
            if (BuyStuff == 1){
                cout<<"\nWhat would you like to buy? (Answer 1 for an Mocha, 2 for a turtleSwirl, or 3 for a Caramel, or 4 for Done) ";
                cin>>ByeType;
                if (ByeType == 1){
                    if (Money >= 10){
                        cout<<"\n\nYou have bought an Mocha."<<endl;
                        Money -= 10;
                        MochaCount += 1;
                        
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 2){
                    if (Money >= 14){
                        cout<<"\n\nYou have bought a turtleSwirl."<<endl;
                        Money -= 14;
                        turtleSwirlCount += 1;
                        
                    }
                    else{
                        cout<<"\n\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 3){
                    if (Money >= 10){
                        cout<<"\n\nYou have bought an Caramel."<<endl;
                        Money -= 10;
                        CaramelCount += 1;
                        
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                        
                    }
                }
                
                
            }
            
            
            
        }
        if (PreviewCoffee == 2){
            cout<<"\nMoving on then.";
            cout<<"\nPress 2 again.";
            cin>>PreviewPastry;
        }
        if (PreviewCoffee == 3){
            cout<<"\nYou have $"<<Money<<'.'<<endl;
        }
        if (PreviewCoffee == 4){
            cout<<"\nYou have "<<MochaCount<<" Mocha(s), "<<turtleSwirlCount<<" turtleSwirls(s), and "<<CaramelCount<<" Caramel(s)."<<endl;
            cout<<"\nYou have "<<StraberryDanishCount<<" StraberryDanish(s), "<<CinnimonRollCount<<" CinnimonRoll(s), and "<<ApplePieCount<<" ApplePie(s)."<<endl;
            cout<<"\nYou have "<<MiniOmeletCount<<" MiniOmelet(s), "<<McmuffinCount<<" Mcmuffin(s), and "<<EggpocketCount<<" Eggpocket(s)."<<endl;
            
        }
        
         if (PreviewPastry == 2){
            cout<<"\nhere is our pastry selections...";
            cout<<"\nStraberryDanish: $5";
            cout<<"\nCinnimonRoll: $8";
            cout<<"\nApplePie: $6";
            cout<<"\n\nWould you like to buy anything from this section? (Answer 1 for Yes or 2 to proceed to Snacks) ";
            cin>>BuyStuff;
            if (BuyStuff == 1){
                cout<<"\nWhat would you like to buy? (Answer 1 for an StraberryDanish, 2 for a CinnimonRoll, or 3 for a ApplePie.) ";
                cin>>ByeType;
                if (ByeType == 1){
                    if (Money >= 5){
                        cout<<"You have bought an StraberryDanish."<<endl;
                        Money -= 5;
                        StraberryDanishCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 2){
                    if (Money >= 8){
                        cout<<"\nYou have bought a CinnimonRoll."<<endl;
                        Money -= 8;
                        CinnimonRollCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 3){
                    if (Money >= 6){
                        cout<<"\nYou have bought an ApplePie."<<endl;
                        Money -= 6;
                        ApplePieCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
            }
        }
        
        
        if (PreviewPastry == 2){
            cout<<"\nMoving on then.";
            cout<<"\nPress 2 again.";
            cin>>PreviewSnacks;
        }
        if (PreviewPastry == 3){
            cout<<"\nYou have $"<<Money<<'.'<<endl;
        }
        if (PreviewPastry == 4){
            cout<<"\nYou have "<<MochaCount<<" Mocha(s), "<<turtleSwirlCount<<" turtleSwirls(s), and "<<CaramelCount<<" Caramel(s)."<<endl;
            cout<<"\nYou have "<<StraberryDanishCount<<" StraberryDanish(s), "<<CinnimonRollCount<<" CinnimonRoll(s), and "<<ApplePieCount<<" ApplePie(s)."<<endl;
            cout<<"\nYou have "<<MiniOmeletCount<<" MiniOmelet(s), "<<McmuffinCount<<" Mcmuffin(s), and "<<EggpocketCount<<" Eggpocket(s)."<<endl;
        }
        
        
        
        if (PreviewSnacks == 2){
            cout<<"\nhere is our Snack selections...";
            cout<<"\nMiniOmelet: $10";
            cout<<"\nMcmuffin: $5";
            cout<<"\nEggpocket: $3";
            cout<<"\n\nWould you like to buy anything from this section? (Answer 1 for Yes or 2 to proceed to next) ";
            cin>>BuyStuff;
            if (BuyStuff == 1){
                cout<<"\nWhat would you like to buy? (Answer 1 for an MiniOmelet, 2 for a Mcmuffin, or 3 for a Eggpocket.) ";
                cin>>ByeType;
                if (ByeType == 1){
                    if (Money >= 10){
                        cout<<"You have bought an StraberryDanish."<<endl;
                        Money -= 10;
                        MiniOmeletCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 2){
                    if (Money >= 5){
                        cout<<"\nYou have bought a Mcmuffin."<<endl;
                        Money -= 5;
                        McmuffinCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
                if (ByeType == 3){
                    if (Money >= 3){
                        cout<<"\nYou have bought an Eggpocket."<<endl;
                        Money -= 3;
                        EggpocketCount += 1;
                    }
                    else{
                        cout<<"\nYou do not have enough money to buy this item."<<endl;
                    }
                }
            }
        }
        
        if (PreviewSnacks == 2){
            cout<<"\nSeems as if that all...";
            cout<<"\nare You satified with what you have .";
            cout<<"\n\n(Answer 1 yes, 2 for no go again.) ";
            if (Yes == 1){
                    cout<<"\nThanks for shopping at Hearts.";
                    cout<<"\nHave a wonderfulDay.";
                    return 0;
                    
                    
                    }
                    else{
                        cout<<"\nThan away we go again.";
                        cout<<"\nPress 2 again.";
                        cin>>PreviewCoffee;
                    }
                }
            
          if (PreviewSnacks == 3){
            cout<<"\nYou have $"<<Money<<'.'<<endl;
        }
        if (PreviewSnacks == 4){
            cout<<"\nYou have "<<MochaCount<<" Mocha(s), "<<turtleSwirlCount<<" turtleSwirls(s), and "<<CaramelCount<<" Caramel(s)."<<endl;
            cout<<"\nYou have "<<StraberryDanishCount<<" StraberryDanish(s), "<<CinnimonRollCount<<" CinnimonRoll(s), and "<<ApplePieCount<<" ApplePie(s)."<<endl;
            cout<<"\nYou have "<<MiniOmeletCount<<" MiniOmelet(s), "<<McmuffinCount<<" Mcmuffin(s), and "<<EggpocketCount<<" Eggpocket(s)."<<endl;
        }
          
          
           
        }
        
        
        
        
    }
    
    
    
    
    
    
    
    


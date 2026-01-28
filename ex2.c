#include <stdio.h>

int main() {
     int accountType;
    int balance;
    int WithdrawlAmount;
    scanf("%d %d %d",&accountType,&balance,&WithdrawlAmount);
    switch(accountType){
    case 1:
      if (balance>=WithdrawlAmount){
       printf("Transaction Successfull");
      }
      else{
        printf("Limit Exceeded");
      }
      break;
        
    case 2:
      if(WithdrawlAmount <= 5000){
        printf("Transaction Successfull");}
      else{
        printf("Limit Exceeded");
      }
    }

    return 0;
}

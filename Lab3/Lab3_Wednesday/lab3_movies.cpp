#include <iostream>
using namespace std;
/* Marta and four friends go to the movies 1 card is 200 , they pay for the genre , drinks , and if its a wednesday and they are paying with card the get 50% off on only the tickets*/
int main() {
    int price_for_drinks, price_for_tickets = 800 , total_price = 0,popcorn_price ; // trackers 
    string genre , day , drink , popcorn_size; // variables
    int drink_amount , card, amount_of_popcorn; 
    cin >> genre >> popcorn_size >> amount_of_popcorn >> drink >> drink_amount >> day >> card;
    if(day == "Wednesday" && card == 1){ // checking for the discount 
        price_for_tickets /= 2;
     }
    total_price += price_for_tickets;
    if(genre == "action"){// adding the genre price depending on the genre 
        total_price += 40;
    }
    else if(genre == "comedy"){
        total_price += 20;
    }
    else if(genre == "romance"){
        total_price += 30;
    }
    if (drink == "Fanta" || drink == "CocaCola" || drink == "Sprite"){ // adding the drink price depending on the drink 
        price_for_drinks = 100*drink_amount; // multiplying the price of the drink with the amount 
    }
    else if (drink == "Water"){
        price_for_drinks = 80 *drink_amount;
    }
    else if (drink == "IceTea"){
        price_for_drinks = 120 *drink_amount;
    }
    total_price+= price_for_drinks; // adding the price of drinks to the total anyways 
    if(popcorn_size == "L"){ // same thing with the popcorn  
        popcorn_price = amount_of_popcorn*200;
    }
    else if(popcorn_size == "M"){
        popcorn_price = amount_of_popcorn*150;
    }
    else if(popcorn_size == "S"){
        popcorn_price = amount_of_popcorn*100;
    }
    total_price += popcorn_price; // adding the price of popcorn to the total anyways 
    cout << total_price;
    return 0;
}

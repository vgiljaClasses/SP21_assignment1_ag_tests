#include "Card.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Card card1(Card::FaceEnum::ACE, Card::SuitEnum::CLUB);
    Card card2(Card::FaceEnum::ACE, Card::SuitEnum::SPADE);
    Card card3(Card::FaceEnum::FIVE, Card::SuitEnum::DIAMOND);
    Card card4(Card::FaceEnum::TWO, Card::SuitEnum::HEART);
    Card card5(Card::FaceEnum::KING, Card::SuitEnum::CLUB);
    Card card6(Card::FaceEnum::KING, Card::SuitEnum::CLUB);

    // Test 1
    cout << "Card Test 1: Testing Card.Value()" << endl;
    if (card1.Value() != 1 || card2.Value() != 1 || card3.Value() != 5 || card4.Value() != 2 || card5.Value() != 13) {
        cout << "\tERROR: Card.Value() output is incorrect" << endl;
        return 1;
    }
    cout << "Card Test 1 Passed" << endl;

    //Test 2
    cout << "Card Test 2: Testing Card.DoesCardMatch()" << endl;
    
    if (!card5.DoesCardMatch(card5) || !card5.DoesCardMatch(card6)) {
        cout<< "\tERROR: Card.DoesCardMatch() should have returned TRUE for these cases" << endl;
        return 1;
    }
  
    if (card1.DoesCardMatch(card2) || card1.DoesCardMatch(card5) || card2.DoesCardMatch(card3)) {
        cout<< "\tERROR: Card.DoesCardMatch() should have returned FALSE for these cases" << endl;
        return 1;
    }
  
    cout << "Card Test 2 Passed" << endl;

    //Test 3
    cout << "Card Test 3: Testing Card.IsCardEqual()" << endl;
    if (!card1.IsCardEqual(card1) || !card1.IsCardEqual(card2) || !card5.IsCardEqual(card6)) {
        cout<< "\tERROR: Card.IsCardEqual() should have returned TRUE for these cases" << endl;
        return 1;      
    }
    if (card1.IsCardEqual(card3) || card1.IsCardEqual(card5) || card2.IsCardEqual(card3)) {
        cout<< "\tERROR: Card.IsCardEqual() should have returned FALSE for these cases" << endl;
        return 1;      
    }
  
    cout << "Card Test 3 Passed" << endl;
  
    //Test 4
    cout << "Card Test 4: Testing Card.IsCardGreaterThan()" << endl;
    if (!card3.IsCardGreaterThan(card1) || !card3.IsCardGreaterThan(card4) || !card5.IsCardGreaterThan(card3)) {
        cout<< "\tERROR: Card.IsCardGreaterThan() should have returned TRUE for these cases" << endl;
        return 1;      
    }
    if (card1.IsCardGreaterThan(card3) || card1.IsCardGreaterThan(card5) || card1.IsCardGreaterThan(card2)) {
        cout<< "\tERROR: Card.IsCardGreaterThan() should have returned FALSE for these cases" << endl;
        return 1;      
    }
  
      cout << "Card Test 4 Passed" << endl;

    return 0;
}

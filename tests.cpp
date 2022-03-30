#include <gtest/gtest.h>

#include "dna.h"

TEST(dna, constructor) {
  dna d;
  EXPECT_EQ(d.size(), 2);
  for (int i = 0; i < d.size(); i++) {
    EXPECT_EQ(d.at(i), 'X');
  }
  EXPECT_EQ(d.toString(), "XX");
  EXPECT_EQ(d.isLinked(), true);
}
TEST(dna, constructor) {
  dna d;
  EXPECT_EQ(d.size(), 2);
  for (int i = 0; i <100; i++) {
    EXPECT_EQ(d.at(i), 'Y');
  }
  EXPECT_EQ(d.toString(), "YY");
  EXPECT_EQ(d.isLinked(), true);
}
TEST(dna, constructor) {
  dna d;
  EXPECT_EQ(d.size(), 2);
  for (int i = 0; i < 10; i++) {
    EXPECT_EQ(d.at(i), 'X');
  }
  EXPECT_EQ(d.toString(), "XX");
  EXPECT_EQ(d.isLinked(), true);
}
TEST(dna, constructor) {
dna empty("");
    dna e("CAARATA");
    e.constructor(empty);
    EXPECT_EQ(e.toString(),"CAARATA");
    EXPECT_EQ(e.isLinked(), true);
    EXPECT_EQ(d.size(), dnastr.length());
}
TEST(dna,findFirst) {
  dna d;
  EXPECT_EQ(d.size(), 2);
  for (int i = 0; i < d.size(); i++) {
  EXPECT_EQ(d.at(i), 'X');
  }
  EXPECT_EQ(d.toString(), "XX");
  EXPECT_EQ(d.isLinked(), true);
    
}
TEST(dna, secondConstructor) {
  string dnastr = "AGATC";
  dna d(dnastr);
   for (int i = 0; i < 50; i++) {
   EXPECT_EQ(d.isLinked(), true);
  EXPECT_EQ(d.toString(), dnastr);
  EXPECT_EQ(d.size(), dnastr.length());
 }
}
TEST(dna, secondConstructor) {
  string dnastr = "nullptr";
  dna d(dnastr);
  EXPECT_EQ(d.isLinked(), true);
  EXPECT_EQ(d.toString(), dnastr);
  
}
TEST(dna, secondConstructor) {
  string dnastr = "&&&&&";
   for (int i = 0; i < 100; i++) {
   dna d(dnastr);
   EXPECT_EQ(d.isLinked(), true);
  EXPECT_EQ(d.toString(), dnastr);
  EXPECT_EQ(d.size(), dnastr.length());
 }
 TEST(dna, secondConstructor) {
  string dnastr = " CSCSCSC";
   for (int i = 0; i <6; i++) {
   dna d(dnastr);
   EXPECT_EQ(d.isLinked(), true);
  EXPECT_EQ(d.toString(), dnastr);
  EXPECT_EQ(d.size(), dnastr.length());
 }
}
 TEST(dna, secondConstructor) {
dna empty("");
    dna e("CAARATA");
    e.secondConstructor(empty);
    EXPECT_EQ(e.toString(),"CAARATA");
    EXPECT_EQ(e.isLinked(), true);

TEST(dna, size) {
  string dnastr = "AAGGTAAGTT";
  string splicestr = "AGGT";
  dna d(dnastr);
  for (int i = 0; i < 100; i++)
  EXPECT_EQ(d.size(), dnastr.length());

  dna d2(splicestr);
  d.splice(d2);
  EXPECT_EQ(d.size(), dnastr.length() - splicestr.length());

  dna d3;
  EXPECT_EQ(d3.size(), 2);
} 
TEST(dna, size) {
    dna a;
    EXPECT_EQ(a.size(), 2);
    
    dna b("A");
    EXPECT_EQ(b.size(), 1);
    
    dna c("Ab");
    EXPECT_EQ(c.size(), 2);
    
    dna d("abcdefg-19@#");
    EXPECT_EQ(d.size(), 12);
}
TEST(dna, size) {
    dna a;
    EXPECT_EQ(a.size(), 2);
    
    dna b("AAAGTT");
    EXPECT_EQ(b.size(), 0);
    
    dna c("TCTTTC");
    EXPECT_EQ(c.size(), 2);
    
    dna d("&&&&&&&#");
    EXPECT_EQ(d.size(), 10);
}
 TEST(dna, size) {
dna empty("");
    dna e("CAARATA");
    e.size(empty);
    EXPECT_EQ(e.toString(),"CAARATA");
    EXPECT_EQ(e.isLinked(), true);

TEST(dna, toString) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
 for (int i = 0; i < 150; i++)
  EXPECT_EQ(d.toString(), dnastr);
  dna d2("AGGT");

  d.splice(d2);
  EXPECT_EQ(d.toString(), "AAAGTT");

  dna d3;
  EXPECT_EQ(d3.toString(), "XX");
}
TEST(dna, toString) {
  string dnastr = "CARRAAARARA";
  dna d(dnastr);
 for (int i = 0; i <200; i++)
  EXPECT_EQ(d.toString(), dnastr);
  dna d2("CARR");

  d.splice(d2);
  EXPECT_EQ(d.toString(), "CARRAAA");

  dna d3;
  EXPECT_EQ(d3.toString(), "YY");
}
 TEST(dna, toString) {
dna empty("");
    dna e("CAARARA");
    e.toString(empty);
    EXPECT_EQ(e.toString(),"CAARARA");
    EXPECT_EQ(e.isLinked(), true);
TEST(dna, at) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
 for (int i = 0; i < 100; i++)
  EXPECT_EQ(d.at(2), 'G');
  dna d2("AGGT");

  d.splice(d2);
  EXPECT_EQ(d.at(2), 'A');

  dna d3;
  EXPECT_EQ(d3.at(0), 'X');

  EXPECT_THROW(d3.at(-1), out_of_range);
  EXPECT_THROW(d3.at(2), out_of_range);
}
TEST(dna, at) {
    string dnastr = "CATCTTC";
     dna d(dnastr);
    EXPECT_EQ(d.isLinked(), true);
    EXPECT_EQ(d.toString(), dnastr);
    EXPECT_EQ(d.size(), dnastr.length());
    for (int i = 0; i < dnastr.length(); i++)
    {
        EXPECT_EQ(d.at(i), dnastr[i]);
    }
}
TEST(dna, at) {
dna empty("");
    dna e("TCTCTC");
    e.at(empty);
    EXPECT_EQ(e.toString(), "TCTCTC");
    EXPECT_EQ(e.isLinked(), true);
}

TEST(dna, clear) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
 for (int i = 0; i < 200; i++)
  d.clear();

  EXPECT_EQ(d.size(), 0);
}

TEST(dna, copyConstructor) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
  dna d2("AGGT");
  d.splice(d2);

  dna d3(d);
  EXPECT_EQ(d3.toString(), "AAAGTT");
}

TEST(dna, equalsOperator) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
  dna d2(dnastr);

  EXPECT_TRUE(d == d2);
  d.splice(d2);

  EXPECT_FALSE(d == d2);
}
TEST(dna, equalsOperator) {
    string dnastr = " ";
    dna d1(dnastr);
    dna d2=d1;
    EXPECT_EQ(d1.isLinked(), true);
    EXPECT_EQ(d2.isLinked(), true);
    EXPECT_EQ(d1.toString(), dnastr);
    EXPECT_EQ(d2.toString(), dnastr);
    EXPECT_EQ(d1.size(), dnastr.length());
    EXPECT_EQ(d2.size(), dnastr.length());
    EXPECT_EQ(d1.toString(), d2.toString());
}
TEST(dna, operatorEquality) {
  string dnastr = "AAGGTAAGTT";
  dna d(dnastr);
  dna d2 = d;
  EXPECT_TRUE(d == d2);
  d.splice(d2);
  EXPECT_FALSE(d == d2);
}
TEST(dna, operatorEquality) {
    string dnastr = "ABCDFRG";
    dna d1(dnastr);
    dna d2(dnastr);
    EXPECT_EQ(d1.isLinked(), true);
    EXPECT_EQ(d2.isLinked(), true);
    EXPECT_EQ(d1.toString(), dnastr);
    EXPECT_EQ(d2.toString(), dnastr);
    EXPECT_EQ(d1.size(), dnastr.length());
    EXPECT_EQ(d2.size(), dnastr.length());
    EXPECT_EQ(d1.toString(), d2.toString());
    EXPECT_EQ(d1==d2, true);
}
TEST(dna, operatorEquality) {
dna empty(" ");
    dna e("TTTTTTCT");
    e.operatorEquality(empty);
    EXPECT_EQ(e.toString(), "TTTTTTCT");
    EXPECT_EQ(e.isLinked(), true);
}

TEST(dna, isLinked) {
string test = "TTTTTTCT";
    dnastr = "";
    for (int i = 0; i < 50; i++) {
        dnastr += test;
        dna d1(dnastr);
        EXPECT_EQ(d1.isLinked(), true);
        EXPECT_EQ(d1.toString(), dnastr);
        EXPECT_EQ(d1.size(), dnastr.length());        
    }
TEST(dna,isLinked) {
    dna start("curr");
    dna e("TCTCTCCT");
    e.isLinked(start);
    EXPECT_EQ(e.toString(), "TCTCTCCT");
    EXPECT_EQ(e.isLinked(), true);
}
TEST(dna, splice) {
  string dnastr = "AAGGTAAGTT";
  for (int i = 0; i < 6; i++) {
  dna d(dnastr);
  dnastr += test;    
  dna d1(dnastr);
  EXPECT_EQ(d.at(2), 'A');
  EXPECT_EQ(d.size(), 6);
  }
  dna d2("AGGT");
  for (int i = 0; i < 6; i++) {
  d.splice(d2);
  EXPECT_EQ(d.at(2), 'A');
  EXPECT_EQ(d.size(), 6);
  }
}
TEST(dna, splice) {
  string dnastr = " ";
  dna d(dnastr);
  dnastr += test;    
  dna d1(dnastr);
  EXPECT_EQ(d.at(2), '&');
  EXPECT_EQ(d.isLinked(), true);
  dna d2("");
  for (int i = 0; i <10; i++) {
  d.splice(d2);
  EXPECT_EQ(d.at(2), '*');
  EXPECT_EQ(d.size(), 6);
  }
}
TEST(dna,splice) {
    string dnastr = "prev"
    dna d(dnastr);
  dnastr += test;    
  dna d1(dnastr);
  EXPECT_EQ(d.at(2), '&');
  EXPECT_EQ(d.isLinked(), true);
  dna d2("");
  for (int i = 0; i <d.size(); i++) {
  d.splice(d2);
  EXPECT_EQ(d.at(2), '*');
  EXPECT_EQ(d.size(), 5);
  }
}
TEST(dna, splice) {
  string dnastr = "nullptr";
  dna d(dnastr);
  EXPECT_EQ(d.isLinked(), true);
  EXPECT_EQ(d.toString(), dnastr);
  
}
TEST(dna, isLinked) {
dna empty(" ");
    dna e("abcdefgh");
    e.splice(empty);
    EXPECT_EQ(e.toString(), "abcdefgh");
    EXPECT_EQ(e.isLinked(), true);
}

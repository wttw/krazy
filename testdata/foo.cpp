// test data for krazy

// emptystrcompare
if(str=="") //emptystrcompare
if(   str       ==		"") //emptystrcompare
if (str == "\"") //ok
if (""==str) //emptystrcompare
str += "if (str == "")"; //ok
if (   " " == str) //ok
if (   "" !=str) //emptystrcompare
if (   "" !=str) //krazy:exclude= emptystrcompare

//qstring + qchar
str += "(";  //doublequote_chars
str += "allen" + "d" + "winter"; //doublequote_chars
str += "allen"; //ok
str = "al" + "llen"; //ok
str = "a" + "bc" + "d"; //doublequote_chars

//contractions
str = i18n( "don't" ); // contractions
str = i18n( "do notwon't"); // ok
now is the time for all //ok (not in string)
str += i18n("We'd,probably do it's job better") // contractions
str = i18n("we can't") + "'" + i18n("do this"); // contractions
str = i18n("we can" + "'t" + "'" + "do this"); // ok
I18N_NOOP("it's am we've don't it") // contractions

//QString::null stuff
str = QString::null // nullstrassign
//str = QString::null; // nullstrassign
if (str == QString::null) // nullstrcompare
str = QString::null; //Krazy:exclude=nullstrcompare

//captruefalse
TRUE
TRUE // krazy:exclude=captruefalse


//qminmax
fred=QMAX(i,j); // qminmax
fred=QMAX(i,j); // krazy:exclude=qminmax

// postfix op
for( int i = 0; i < foo; i++ ) // Hit
for( int i = 0; i < foo; i++) // Hit
for( int i = 0; i < foo;i++) // Hit
for( int j = 0; j < foo; j-- ) // Hit
for( int j = 0; j < foo; j--) // Hit
for( int j = 0; j < foo;j--) // Hit
for( int i = 0; i < foo
	; i++ ) // Hit
for( int i = 0; i < foo; ++i ) // not a hit
	 someVar++ ) // Not a hit
someVar++; // Not a hit. See note in postfixop script.
someVar--; // Not a hit. See note in postfixop script.
some = var++ - 3; // Not a hit. See note in postfixop script.
some = var-- + 3; // Not a hit. See note in postfixop script.
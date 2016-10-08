/*
You should complete your assignment in here
*/

// COMP 1711 Assignment 1
// Ryan Wan, Wednesday 5th October 2016

// Include the standard I/O library
#include <stdio.h>

// Tuition Fee does not change and it is assumed that the cost of Textbooks will not change, so they are constants
// The total tuition fee is £9000, but this has been split into two payments, so TuitionFee is assigned a value of 4500
const signed long TuitionFee = 4500;
const signed long Textbooks = 50;

// Rent and Food need to increase by 1% each year and Transport and Social are assumed to increase each year, so they have been assigned as floats
float Rent = 300;
float Food = 100;
float Transport = 50;
float Social = 50;

// Variables in MonthlyTotal will change some months, i.e when there is a need for Tuition/Textbooks
float MonthlyTotal;
// The YearlyTotal will reset to zero after each year
float YearlyTotal;
// The RunningTotal will keep track off all spending throughout the time at university
float RunningTotal;

// The main part of the program
int main()
	{
// The academic year has been used, running from September-June inclusive and excluding July and August
	printf("Year 1\n");
	printf("\n");
	printf("September Costs\n");
	// Each cost is displayed seperately for each month
	// First tuition payment
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	// Money for textbooks is only needed in the first month of the year
	printf("Cost of Textbooks:	£%ld\n", Textbooks);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	// All the costs are added up for the month
	MonthlyTotal = TuitionFee + Textbooks + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	// YearlyTotal is the same as MonthlyTotal in the first month
	YearlyTotal = MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	// RunningTotal for the first month is the same as the MonthlyTotal
	RunningTotal = MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// Textbooks costs are not needed for the rest of the year and tuition is not needed till February
	printf("October Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	// YearlyTotal has now been floated, along with adding the MonthyTotal
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	// RunningTotal also been floated from last month
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("November Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("December Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("January Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// The second tuition fee payment occurs in this month, so TuitionFee is added to calculation
	printf("February Costs\n");
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = TuitionFee + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("March Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("April Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("May Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("June Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// Inflation increases for all these values for the next year
	Rent = Rent*1.01;
	Food = Food*1.01;
	Transport = Transport*1.01;
	Social = Social*1.01;

	// The second year follows an identical format to the first, except there the RunningTotal has been floated from June of the previous year
	printf("Year 2\n");
	printf("\n");
	printf("September Costs\n");
	// First tuition fee payment for the year, so TuitionFee has been added to the calcuation
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	// Money for textbooks is only needed in the first month, so Textbooks has been added to the calcuation
	printf("Cost of Textbooks:	£%ld\n", Textbooks);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = TuitionFee + Textbooks + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	// YearlyTotal has not been floated to reset the cost to zero at the start of the year
	YearlyTotal = MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	// RunningTotal continues to be floated
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Running Total:	£%.0f\n", RunningTotal);
	printf("\n");

	// Textbooks costs are not needed for the rest of the year and tuition is not needed till February, so they have been removed
	printf("October Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	// YearlyTotal has now been floated, along with adding the MonthyTotal
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("November Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("December Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("January Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("February Costs\n");
	// The second tuition fee payment occurs in this month, so TuitionFee is added to calculation
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = TuitionFee + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("March Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("April Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("May Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("June Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// Inflation increases for all these values for the next year
	Rent = Rent*1.01;
	Food = Food*1.01;
	Transport = Transport*1.01;
	Social = Social*1.01;

	// The third year has an identical code to the second year.
	printf("Year 3\n");
	printf("\n");
	printf("September Costs\n");
	// First tuition fee payment for the year, so the cost of Tuition has been added to the calcuation
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	// Money for textbooks is only needed in the first month, so the cost of Textbooks has been added to the calcuation
	printf("Cost of Textbooks:	£%ld\n", Textbooks);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = TuitionFee + Textbooks + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	// YearlyTotal has not been floated to reset the cost to zero at the start of the year
	YearlyTotal = MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	// RunningTotal continues to be floated
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Running Total:	£%.0f\n", RunningTotal);
	printf("\n");

	// Textbooks costs are not needed for the rest of the year and tuition is not needed till February
	printf("October Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	// YearlyTotal has now been floated, along with adding the MonthyTotal
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("November Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("December Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("January Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// The second tuition fee payment occurs in this month, so TuitionFee is added to calculation
	printf("February Costs\n");
	printf("Cost of Tuition:	£%ld\n", TuitionFee);
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = TuitionFee + Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("March Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("April Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("May Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	printf("June Costs\n");
	printf("Cost of Rent:		£%.0f\n", Rent);
	printf("Cost of Food:		£%.0f\n", Food);
	printf("Cost of Transport:	£%.0f\n", Transport);
	printf("Cost of Social Events:	£%.0f\n", Social);
	MonthlyTotal = Rent + Food + Transport + Social;
	printf("Total this Month:	£%.0f\n", MonthlyTotal);
	YearlyTotal = (float) YearlyTotal + MonthlyTotal;
	printf("Total this Year:	£%.0f\n", YearlyTotal);
	// This will be the total cost of unviersity for three years
	RunningTotal = (float) RunningTotal + MonthlyTotal;
	printf("Overall Total:		£%.0f\n", RunningTotal);
	printf("\n");

	// Return sucessfully
	return 0;
	}

#!/usr/bin/env node
//function to use ES6 computed property names on the budget obje
//
function getCurrentYear(){
	const date = new Date();
	return date.getFullYear();

}

export default function getBudgetForCurrentYear(income, gdp, capital){
	const currentYear = getCurrentYear()
	
	const budget = {
		[`income-${currentYear}`]: income,
		[`gdp-${currentYear}`]: gdp,
		[`capital-${currentYear}`]: capital
	}
	return budget;
}

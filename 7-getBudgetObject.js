#!/usr/bin/env node

//object to simply use the keyname instead
//
export default function getBudgetObject(income, gdp, capita) {
  const budget = {
    income,
    gdp,
    capita
  };

  return budget;
}

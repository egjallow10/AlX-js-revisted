

export default class Currency{
	constructor(amount, currency){
		this._amount = amount;
		this._currency = currency;
	}
	get amount() {
		return this._amount;
	}

	get currency() {
		return this._currency;
	}

	set amount(amount) {
		this._amount = amount;
	}

	set currency(currency) {
		return this._currency = currency;
	}

	displayFullPrice(currency_code) {
		return `${this._amount} ${currency_code} (${currency_code})`;
	}

	static convertPrice(amount, conversionRate) {
		return amount * conversionRate;
	}
}

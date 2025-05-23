class HolbertonCourse {
  constructor(name, length, students) {
    // Validating the types of the arguments
    if (typeof name !== 'string') throw new TypeError("name must be a string");
    if (typeof length !== 'number') throw new TypeError("length must be a number");
    if (!Array.isArray(students) || !students.every(s => typeof s === 'string')) {
      throw new TypeError("students must be an array of strings");
    }

    // Setting the underscore version attributes
    this._name = name;
    this._length = length;
    this._students = students;
  }

  // Getter and Setter for name
  get name() {
    return this._name;
  }

  set name(value) {
    if (typeof value !== 'string') throw new TypeError("name must be a string");
    this._name = value;
  }

  // Getter and Setter for length
  get length() {
    return this._length;
  }

  set length(value) {
    if (typeof value !== 'number') throw new TypeError("length must be a number");
    this._length = value;
  }

  // Getter and Setter for students
  get students() {
    return this._students;
  }

  set students(value) {
    if (!Array.isArray(value) || !value.every(s => typeof s === 'string')) {
      throw new TypeError("students must be an array of strings");
    }
    this._students = value;
  }
}

export default HolbertonCourse;

def fun(my_list=[]):
  return [num * num for num in my_list]

def square_matrix_simple(matrix=[]):
  new_metrix = []

  for i in matrix:
    new_metrix.append(fun(i))

  return new_metrix



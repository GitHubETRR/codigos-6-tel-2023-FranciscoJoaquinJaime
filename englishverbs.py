def verify (verb:str):
  past_simple = ['ed', 'd', 'ied']
  past_perfect = ['had', 'have']

  if any(verb.endswith(i) for i in past_simple):
      return "Past Simple"
  elif verb.endswith('ing'):
      return "Present Continous"
  elif any(verb.startswith(i) for i in past_perfect):
      return "Past Perfect"
  else:
      return None

user_verb = input("Ingrese un verbo en inglés: ")

conjugation = verify(user_verb)

if conjugation is None:
    print ("No es un verbo registrado")

else:
    print("El verbo", user_verb, "está conjugado en", conjugation)

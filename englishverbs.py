def verify (verb:str):
  past_simple = ['ed', 'd', 'ied']
  past_perfect = ['had', 'have']

  if any(verb.endswith(verb_end) for verb_end in past_simple):
      return "Past Simple"
  elif verb.endswith('ing'):
      return "Present Continous"
  elif any(verb.startswith(verb_start) for verb_start in past_perfect):
      return "Past Perfect"
  else:
      return None
      sys.exit()

user_verb = input("Ingrese un verbo en inglés: ")

conjugation = verify(user_verb)

if conjugation is None:
    print ("No es un verbo registrado")
    
else:
    print("El verbo", user_verb, "está conjugado en", conjugation)


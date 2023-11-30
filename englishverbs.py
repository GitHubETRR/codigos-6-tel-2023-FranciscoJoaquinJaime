def verify (verb:str):
  past_simple = ['ed', 'd', 'ied']
  past_perfect = ['had', 'have']
  past_continous = ['was', 'were']
  future_continous = ['will', 'be']
  future_perfect = ['will', 'have']

  if any(verb.endswith(i) for i in past_simple):
      return "Past Simple"
  elif (verb.__contains__('going to')):
      return "Future Simple"
  elif any(verb.__contains__(i) for i in past_continous) and (verb.endswith('ing')):
      return "Past Continous"
  elif verb.endswith('ing'):
      return "Present Continous"
  elif (verb.__contains__(i) for i in future_continous) and (verb.endswith('ing')):
      return "Future Continous"
  elif any(verb.startswith(i) for i in past_perfect):
      return "Past Perfect"
  elif verb.__contains__('have'):
      return "Present Perfect"
  elif (verb.__contains__(i) for i in future_perfect):
      return "Future Perfect"
  else:
      return None

user_verb = input("Ingrese un verbo en inglés: ")

conjugation = verify(user_verb)

if conjugation is None:
    print ("Es un verbo irregular o no es un verbo")

else:
   # capitalize(user_verb)
    print(user_verb, "está conjugado en", conjugation)

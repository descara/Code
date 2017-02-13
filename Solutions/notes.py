# 

notes = ('A', 'B', 'C', 'D', 'E', 'F', 'G')
counter = 0

notedict = dict.fromkeys(xrange(1,51))

# Populate dictionary with notes
for key in notedict:
	for note in notes:
		if counter < len(notes):
			notedict[key] = notes[counter]
			counter += 1
			break
		else:
			counter = 0

# countKeys function
# Returns distinct notes

def countKeys(values):
	keys = []
	for val in values:
		keys.append(notedict.get(val))
		
	return len(set(keys))

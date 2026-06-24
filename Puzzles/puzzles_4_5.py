

def remove_vowels(input_str: str):
    vowels = ['a', 'e', 'i', 'o', 'u']
    output_str = ''
    for char in input_str:
        if char in vowels:
            output_str += char
    return output_str
print(remove_vowels('hello world'))

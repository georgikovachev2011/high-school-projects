


from typing import Any



def remove_vowels(input_str: str):
    vowel = ['a', 'e', 'i', 'o', 'u']
    output = ''

    for vowels in input_str:

        if not vowels in vowel:
            output += vowels

    return output


print(remove_vowels('hello world'))



def get_tic_tac_toe_winner(input_board: list[list[str]]) -> str | None:
    if input_board is None:
        return None

    for row in range(3):

        if (input_board[row][0] == input_board[row][1] == input_board[row][2] != None):
            return input_board[row][0]

    for column in range(3):

        if (input_board[0][column] == input_board[1][column] == input_board[2][column] != None):
            return input_board[0][column]

    if (input_board[0][0] == input_board[1][1] == input_board[2][2] != None):
        return input_board[0][0]

    if (input_board[0][2] == input_board[1][1] == input_board[2][0] != None):
        return input_board[0][2]

    return None


print(get_tic_tac_toe_winner([['X', 'O', 'O'], ['O', 'X', 'O'], ['X', 'O', 'O']]))



def get_longest_string(input_strs: list[str]) -> str:
    longest_string = ''

    for input_str in input_strs:

        if len(input_str) > len(longest_string):
            longest_string = input_str

    return longest_string


print(get_longest_string(['cat', 'dog', 'bird', 'lizard']))



def filter_even_length_strings(input_strs: list[str]) -> list[str]:
    output: list[str] = []

    for input_str in input_strs:

        if len(input_str) % 2 == 0:
            output.append(input_str)

    return output


print(filter_even_length_strings(['cat', 'dog', 'fish', 'elephant']))



def reverse_elements(input_nums: list[int]) -> list[int]:
    return list(reversed(input_nums))


print(reverse_elements([1, 2, 3, 4, 5]))



def filter_type(input_strs: list[str | int]) -> list[str]:
    output: list[str] = []

    for input_str in input_strs:

        if type(input_str) is str:
            output.append(input_str)

    return output


print(filter_type(['hello', 1, 2, 'www']))



def find_zero_sum_triplets(input_nums: list[int]) -> list[tuple[int, int, int]]:
    output = []
    n = len(input_nums)

    for i in range(n - 2):

        for j in range(i + 1, n - 1):

            for k in range(j + 1, n):

                if input_nums[i] + input_nums[j] + input_nums[k] == 0:
                    output.append((i, j, k))

    return output


print(find_zero_sum_triplets([1, 2, 3, 4, 5, -9]))
print(find_zero_sum_triplets([1, 2, 3, 4, 5]))
print(find_zero_sum_triplets([1, 2, 3, 4, 5, -9, -9]))



def string_to_morse_code(input_str: str) -> str:
    morse_dict = {
        'a': '.-',    'b': '-...',  'c': '-.-.',  'd': '-..',
        'e': '.',     'f': '..-.',  'g': '--.',   'h': '....',
        'i': '..',    'j': '.---',  'k': '-.-',   'l': '.-..',
        'm': '--',    'n': '-.',    'o': '---',   'p': '.--.',
        'q': '--.-',  'r': '.-.',   's': '...',   't': '-',
        'u': '..-',   'v': '...-',  'w': '.--',   'x': '-..-',
        'y': '-.--',  'z': '--..',

        '0': '-----', '1': '.----', '2': '..---', '3': '...--',
        '4': '....-', '5': '.....', '6': '-....', '7': '--...',
        '8': '---..', '9': '----.',

        '.': '.-.-.-', ',': '--..--', '?': '..--..', "'": '.----.',
        '!': '-.-.--', '/': '-..-.',  '(': '-.--.',  ')': '-.--.-',
        '&': '.-...',  ':': '---...', ';': '-.-.-.',
        '=': '-...-',  '+': '.-.-.',  '-': '-....-',
        '_': '..--.-', '"': '.-..-.', '$': '...-..-',
        '@': '.--.-.',

        ' ': '/'
    }
    output = []

    for char in input_str.lower():

        if char in morse_dict:
            output.append(morse_dict[char])

    return ' '.join(output)


print(string_to_morse_code('HELLO, WORLD!'))



def string_to_ascii(input_str: str) -> list[int]:
    output: list[int] = []

    for char in input_str:

        output.append(ord(char))

    return output


print(string_to_ascii('Programming puzzles!'))



def get_second_largest_number(input_num: list[int]) -> int | None:
    if len(input_num) < 2:
        return None

    first_largest = max(input_num)
    input_num.remove(first_largest)
    second_largest = max(input_num)

    return second_largest


print(get_second_largest_number([1, 2, 3, 4, 5]))



def format_number_with_commas(input_num: int) -> str:
    return format(input_num, ',')


print(format_number_with_commas(1000000))



def filter_strings_with_vowels(input_strs: list[str]) -> list[str]:
    output: list[str] = []

    for input_str in input_strs:

        if 'a' in input_str:
            output.append(input_str)

        if 'e' in input_str:
            output.append(input_str)

        if 'i' in input_str:
            output.append(input_str)

        if 'o' in input_str:
            output.append(input_str)

        if 'u' in input_str:
            output.append(input_str)

    return output


print(filter_strings_with_vowels(['apple', 'banana', 'zyxvb']))



def tap_code_to_english(input_code: str) -> str:
    tap_code_map = {

    ". ."        : "a",  ". .."       : "b",  ". ..."      : "c",  ". ...."     : "d",  ". ....."    : "e",
    ".. ."       : "f",  ".. .."       : "g",  ".. ..."     : "h",  ".. ...."    : "i",  ".. ....."   : "k",
    "... ."      : "l",  "... .."      : "m",  "... ..."    : "n",  "... ...."   : "o",  "... ....."  : "p",
    ".... ."     : "q",  ".... .."     : "r",  ".... ..."   : "s",  ".... ...."  : "t",  ".... ....." : "u",
    "..... ."    : "v",  "..... .."    : "w",  "..... ..."  : "x",  "..... ...." : "y",  "..... ....." : "z"
}


    output = ""
    parts = input_code.split()

    i = 0
    while i < len(parts):
        code = parts[i] + " " + parts[i + 1]
        output = output + tap_code_map[code]
        i = i + 2

    return output


print(tap_code_to_english('.. ... .. ....'))
print(tap_code_to_english('. ... ... .... ... .... ... .'))



def reverse_first_five_positions(input_nums: list[int]) -> list[int]:
    output: list[int] = []

    for i in range(len(input_nums)):

        if i < 5:
            output.append(input_nums[4 - i])

        else:
            output.append(input_nums[i])

    return output


print(reverse_first_five_positions([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))



def filter_palindromes(input_strs: list[str]) -> list[str]:
    output: list[str] = []

    for input_str in input_strs:

        if list(input_str) == list(reversed(input_str)):
            output.append(input_str)

    return output


print(filter_palindromes(['cat', 'dog', 'racecar', 'deified', 'giraffe']))



def sum(a, b):
    return a + b

c = sum(4,5)



def filter_strings_containing_a(input_strs: list[str]) -> list[str]:
    output: list[str] = []

    for input_str in input_strs:

        if 'a' in input_str:
            output.append(input_str)

    return output


print(filter_strings_containing_a(['apple', 'banana', 'chery', 'date']))



def sum_if_less_than_fifty(num_one: int, num_two: int) -> int | None:
    sum = num_one + num_two

    if sum < 50:

        return sum

    return None


print(sum_if_less_than_fifty(20, 20))
print(sum_if_less_than_fifty(20, 30))
print(sum_if_less_than_fifty(20, 100))



def sum_even(input_numbers: list[int]) -> int:
    sum = 0

    for number in input_numbers:
        if number % 2 == 0:
            sum += number

    return sum

input = ["apple", "banana", "cherry", "date"]

output = filter_strings_containing_a(input)

print(output)



print(sum_if_less_than_fifty(20, 20))
print(sum_if_less_than_fifty(20, 30))
print(sum_if_less_than_fifty(20, 100))



print(sum_even([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))
print(sum_even([10, 20, 30, 40, 50]))
print(sum_even([9, 7, 5, 3, 1]))



print([x for x in input if 'a' in x])



def string_to_ascii(input_str: str) -> list[int]:
    output: list[int] = []

    for char in input_str:
        output.append(ord(char))

    return output


print(string_to_ascii('Programming puzzles!'))



def ascii_to_string(input_int: list[int]) -> str:
    output: list[int] = []

    for char in input_int:
        output.append(chr(char))

    return ''.join(output)


print(ascii_to_string([80, 114, 111, 103, 114, 97, 109, 109, 105, 110, 103, 32, 112, 117, 122, 122, 108, 101, 115, 33]))



def censor_python(input_str: list[str]) -> list[str]:
    for index in range(len(input_str)):
        word = input_str[index]

        for char in ['p', 'y', 't', 'h', 'o', 'n']:
            word = word.replace(char, 'X')
            word = word.replace(char.upper(), 'X')
        input_str[index] = word

    return input_str


print(censor_python(['python', 'hello', 'HELLO']))



def get_number_of_digits(input_num: int) -> int:
    return len(str(input_num))


print(get_number_of_digits(0))
print(get_number_of_digits(1234))
print(get_number_of_digits(123456789))



def print_triangle(number_of_levels: int, symbol: str) -> None:
    if number_of_levels <= 0:
        return

    for i in range(1, number_of_levels + 1):
        print(symbol * i)


print_triangle(4, '*')



def check_if_string_is_happy(input_str: list[str]) -> bool:
    for i in range(0, len(input_str) - 2):
        triple = input_str[i:i+3]

        if len(set(triple)) != 3:
            return False

        else:
            return True


print(check_if_string_is_happy('abcdefg'))



def fibonacci(sequence_number: int) -> int:
    if sequence_number == 0:
        return 0

    elif sequence_number == 1:
        return 1

    elif sequence_number == 2:
        return 1

    else:
        return fibonacci(sequence_number - 1) + fibonacci(sequence_number - 2)


print(fibonacci(6))



def harmonic_sum(n: int) -> float:
    if n <= 0:
        return 0.0

    return harmonic_sum(n - 1) + 1 / n


print(harmonic_sum(5))



def my_zip(input_list_a: list[Any], input_list_b: list[Any]) -> list[tuple[Any, Any]]:
    return list(zip(input_list_a, input_list_b))


print(my_zip([1, 2, 3, 4], [5, 6, 7, 8]))



def is_valid_equation(input_equation: str) -> bool:
    left, right = input_equation.split('=')

    return eval(left) == eval(right)


print(is_valid_equation('2 + 3 = 5'))
print(is_valid_equation('2 + 3 = 6'))



def xor(input_a: str, input_b: str) -> str:
    output: list[str] = []
    length = min(len(input_a), len(input_b))

    for index in range(length):
        bit_a = input_a[index]
        bit_b = input_b[index]

        if bit_a != bit_b:
            output.append('1')
        else:
            output.append('0')

    return ''.join(output)


print(xor('1101', '0001'))
print(xor('1111', '1111'))



def rotate_list_left(input_list: list[Any], rotate_amount: int) -> list[Any]:
    rotate_amount %= len(input_list)

    return input_list[rotate_amount:] + input_list[:rotate_amount]


print(rotate_list_left([1, 2, 3, 4, 5], 2))



def find_adjacent_nodes(adj_matrix: list[list[int]], start_node: int) -> list[int]:
    adjacent_nodes: list[int] = []
    row = adj_matrix[start_node]

    for index, connect in enumerate(row):

        if connect == 1:
            adjacent_nodes.append(index)

    return adjacent_nodes


print(find_adjacent_nodes([[1, 1, 1], [1, 0, 0],[1, 0, 0]], 0))



def count_peaks_valleys(price_action: list[int]) -> tuple[int, int]:
    peaks = 0
    valleys = 0

    for i in range (1, len(price_action) - 1):
        previous_valley = price_action[i - 1]
        current_valley = price_action[i]
        next_valley = price_action[i + 1]

        if previous_valley < current_valley and current_valley > next_valley:
            peaks += 1

        if previous_valley > current_valley and current_valley < next_valley:
            valleys += 1

    return peaks, valleys


print(count_peaks_valleys([1, 2, 3, 2, 1]))
print(count_peaks_valleys([1, 2, 3, 2, 1, 2]))




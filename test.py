import re

def clean_list_elements(input_list):
    pattern = r'[,\[\]]'
    return [re.sub(pattern, '', str(item)) for item in input_list]

# 使用例
original_list = ["[Hello], World", "Python, [Programming]", "[OpenAI], GPT", 123, ["nested", "list"]]
cleaned_list = clean_list_elements(original_list)

print("Original list:", original_list)
print("Cleaned list:", cleaned_list)
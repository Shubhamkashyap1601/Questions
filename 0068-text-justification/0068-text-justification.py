class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        result = []  # To store the final justified lines
        line = []    # To temporarily store words for current line
        line_length = 0  # To track the length of the words in the current line
        
        # Loop through each word in the input words list
        for word in words:
            # Check if adding the current word exceeds the maxWidth for the line
            if line_length + len(line) + len(word) <= maxWidth:
                line.append(word)  # Add the word to the line
                line_length += len(word)  # Update the line length
            else:
                result.append(line)  # Add the words in the line to the result
                line = [word]  # Start a new line with the current word
                line_length = len(word)  # Set the line length to the word's length
        
        result.append(line)  # Append the last line to the result
        
        justified_lines = []
        
        # Loop through each line except the last one
        for i in range(len(result) - 1):
            line = result[i]
            num_words = len(line)
            num_spaces = maxWidth - sum(len(word) for word in line)
            
            # Handle the case when space_gaps is zero
            space_gaps = max(num_words - 1, 1)
            
            spaces_per_gap = num_spaces // space_gaps
            extra_spaces = num_spaces % space_gaps

            justified_line = ""
            
            # Iterate through each word in the line
            for word in line:
                justified_line += word
                
                # Check if there are more spaces to distribute
                if space_gaps > 0:
                    spaces_to_add = spaces_per_gap + (1 if extra_spaces > 0 else 0)
                    justified_line += " " * spaces_to_add
                    extra_spaces -= 1
                    space_gaps -= 1

            justified_lines.append(justified_line)

        last_line = " ".join(result[-1])
        last_line += " " * (maxWidth - len(last_line))
        justified_lines.append(last_line)

        return justified_lines
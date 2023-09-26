def spin_words(sentence):
    return " ".join(list(map(lambda x: x[::-1] if len(x) >= 5 else x, sentence.split())))

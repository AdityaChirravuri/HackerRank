# Enter your code here

def strike(word)
  "<strike>#{word}</strike>"
end

def mask_article(string, words)
  words.each do |word|
    string.gsub!(word, strike(word))
  end

  string
end
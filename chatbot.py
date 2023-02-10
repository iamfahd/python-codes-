def chatbot():
    print("Hi, I'm a chatbot. How can I help you today?")
    
    while True:
        user_input = input("You: ")
        
        if user_input.lower() in ["hi", "hello", "hey"]:
            print("Chatbot: Hello! How can I help you today?")
        elif user_input.lower() == "bye":
            print("Chatbot: Bye! Have a great day.")
            break
        else:
            print("Chatbot: I'm sorry, I didn't understand your question. Could you please rephrase it?")

chatbot()

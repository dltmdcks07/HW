user1 = input("유저1 (가위/바위/보): ")
user2 = input("유저2 (가위/바위/보): ")

if user1 == user2:
    print("비겼습니다.")

elif (user1 == "가위" and user2 == "보"):
    print("유저1이 이겼습니다.")
elif (user1 == "바위" and user2 == "가위"):
    print("유저1이 이겼습니다.")
elif (user1 == "보" and user2 == "바위"):
    print("유저1이 이겼습니다.")

else:
    print("유저2가 이겼습니다.")

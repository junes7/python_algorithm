# 파일 확장자 확인하기(Check the file extension)
# 정보검색실에서 노트북으로 문서를 작성하던 광곽이는 갑자기 어떠한 파일의 확장자를
# 보고 이 확장자가 어떤 파일인지 잊어버렸다. 광곽이가 파일.확장자를 입력하면 이게
# 어떤 프로그램인지 알 수 있도록 도와주자. 광곽이는 대소문자에 예민하다!
# method 1
s = input()
for i in range(len(s)):
    if s[i] == '.':
        d = s[i:len(s)]
        break
if d == '.dib':
    print('Paint.Picture')
elif d == '.doc':
    print('Word.Document.8')
elif d == '.docx':
    print('Word.Document.12')
elif d == '.htm':
    print('htmfile')
elif d == '.html':
    print('htmlfile')
elif d == '.hwp':
    print('Hwp.Document.96')
elif d == '.hwpx':
    print('Hwp.Document.hwpx.96')
elif d == '.hwt':
    print('Hwp.Document.hwt.96')
elif d == '.jpe' or d == '.jpeg' or d == '.jpg':
    print('jpegfile')
elif d == '.ppt':
    print('PowerPoint.Show.8')
elif d == '.pptx':
    print('PowerPoint.Show.12')
elif d == '.pptxml':
    print('powerpointxmlfile')
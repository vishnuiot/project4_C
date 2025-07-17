rm -fr .git  
git init
git branch -m Grundkurs_C  # rename local brach to remote or any other name_ like master
git add .
git commit -m "Git commit history created"
git remote add origin https://github.com/vishnuiot/project4_Embedded_C.git
git config pull.rebase false # tells git to use a merge strategy by default
git pull origin main --allow-unrelated-histories
git commit -m "Git merge unrelated histories"
git config pull.rebase false # tells git to use a merge strategy by default
git pull https://github.com/vishnuiot/project4_Embedded_C/
git push https://github.com/vishnuiot/project4_Embedded_C/
git commit -m "Git commit history created"



rm -fr .git  
git init
git branch -M Grundkurs_C  # rename local branch to remote or any other name_ like master
git add .
git commit -m "Git commit history created"
git remote add origin https://github.com/vishnuiot/project4_Embedded_C.git
git config pull.rebase false # tells git to use a merge strategy by default
git pull origin main --allow-unrelated-histories
git commit -m "Git merge unrelated histories"
git pull origin Grundkurs_C # pulls from the remote branch Grundkurs_C
git push origin Grundkurs_C # pushes to the remote branch Grundkurs_C
git commit -m "Git commit history created"
git remote -v  # lists all remote repositories
git status # 

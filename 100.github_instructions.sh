# first 6 steps work
# rm -fr .git  
# git init
# git branch -m Grundkurs_C  # rename local brach to remote or any other name_ like master
# git add .
# git commit -m "Git commit history created"
# git remote add origin https://github.com/vishnuiot/project4_Embedded_C.git
# git config pull.rebase false # tells git to use a merge strategy by default
# git pull https://github.com/vishnuiot/project4_Embedded_C/
# git commit -m "Git rebase"
# git pull origin main --allow-unrelated-histories
# git push origin main
# git log --graph --oneline --decorate --all  ## on terminal displays the commit history
# git config --global push.autoSetupRemote true
# git push

git --work-tree="." pull --allow-unrelated-histories
git pull origin Grundkurs_C --allow-unrelated-histories
git config pull.rebase false
git push origin Grundkurs_C
git merge --abort

Step 1:git pull origin Grundkurs_C 


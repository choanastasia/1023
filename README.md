# 1023
--------------------------------------------------------------------------------------------------------------------------------------------------------
pipeline {
    agent any
    stages {
         stage('Pull') {
            steps {
                git 'https://github.com/wangch64/test5.git'
            }
         }
        stage('Scanning code') {
            environment {
                sonarHome = tool 'SonaScanner'
            }
            steps {
                withSonarQubeEnv('Local'){
                    echo "Start Scanning now"
                    sh "${sonarHome}/sonar-scanner-5.0.1.3006-linux/bin/sonar-scanner -Dsonar.projectKey=atest"
                }
            }
        }
	}
}
--------------------------------------------------------------------------------------------------------------------------------------------------------
pipeline {
    agent any
    stages {
        stage('Hello') {
            steps {
                echo 'Hello World'
                git url: 'https://github.com/wangch64/devsec1.git/',
                branch: 'main'
            }
        }
    }
}
----------------------------------------------------------------------------------------------------------------------------------------------------------

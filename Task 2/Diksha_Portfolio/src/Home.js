import React from 'react';
import reactDom from 'react-dom';

import{
    BrowserRouter as Router,
    Route,
    Link,
    NavLink,
    Switch 
}from "react-router-dom"

class Home extends React.Component{
    constructor(){
        super();
    }
    render(){
        return(
            <body>
                <div class="heading">
                    <div class="jumbotron text-center" id="heading">
                    <h1 class="myname">Diksha Chaudhari</h1>
                    <p class="myoccupation">Software Developer</p>
                    <ul class="nav nav-pills nav-justified" id="navigation">
                        <li class="nav-item">
                            <a class="nav-link active" href="/">
                                Home
                            </a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="/project">
                                Project
                            </a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="/contact">
                                contact
                            </a>
                        </li>
                    </ul>
                    </div>

            <div class="container">
                <div class="row">
                <div class="col-sm-4">
                    <div class="rounded-circle">
                        <img
                        src="assets/person_1.jpg"
                        class="rounded-circle mx-auto d-block"
                        alt="my photo"
                        width="200px"
                        height="180px">
                        </img>
                    </div>
                    <br/>
                    </div>
                    <div class="col-sm-8">
                        <h2 class="myskill">Career Objectives</h2>
                        <br/>
                        <p class="skills">
                            To work in a professional environment where I can find myself in decisive opportunities for creating
                            value added career for myself and extend quality service to my organizations.
                        </p>
                    </div>
                </div>
            </div>
            <br/><br/>

            <div class="container">
                <div class="row">
                    <div class="col-sm-6">
                        <h2 class="myskills">Technical Skills</h2>
                        <br/>
                        <ul class="skills">
                            <li>
                                Front End languages = HTML , CSS , javascript , React JS
                            </li>
                            <li>
                                Back End languages = C++ , Java , Node JS
                            </li>
                            <li>
                                Databases = MySQL , Oracle
                            </li>
                        </ul>
                    </div>
                    <div class="col-sm-6">
                        <h2 class="myskills">Internship and Certification</h2>
                        <br/>
                        <ul class="skills">
                            <li>
                               Data Science Internship at LetsGrowMore
                            </li>
                            <li>
                               Virtual Internship at Insidesherpa
                            </li>
                        </ul>
                    </div>
                    <br/><br/><br/><br/>
                    <div class="col-sm-12">
                        <h2 class="myskills">My Projects</h2>
                        <br/>
                        <table class="table table-dark table-striped">
                            <thead>
                                <tr>
                                    <th>Project Domain</th>
                                    <th>Programming Languages</th>
                                    <th>Project Link</th>
                                </tr>
                            </thead>
                            <tbody>
                                <tr>
                                    <td>Full stack web development</td>
                                    <td>HTML , CSS , javascript , Bootstrap , java </td>
                                    <td>
                                        <a href={"http://tourism.nmc.gov.in/"}>Nashik Tourism</a>
                                    </td>
                                </tr>
                                <tr>
                                    <td>Asp.Net application</td>
                                    <td>Asp.Net , Sql Server , Microsoft Visual Studio</td>
                                    <td>
                                        Staff Management System
                                    </td>
                                </tr>
                                <tr>
                                    <td>Android Development</td>
                                    <td>Kotlin</td>
                                    <td>
                                        <a href={"https://github.com/dikshachaudhari4/Music-Player"}>Music Player</a>
                                    </td>
                                </tr>
                                <tr>
                                    <td>Php Application</td>
                                    <td>HTML , CSS , PHP</td>
                                    <td>
                                        <a href={"https://github.com/dikshachaudhari4/File_management_system/"}>File Management System</a>
                                    </td>
                                </tr>
                            </tbody>
                        </table>
                    </div>

                    <div class="col-sm-12">
                        <h2 class="myskills">Education Qualification</h2>
                        <br/>
                        <table class="table table-dark table-striped">
                            <thead>
                                <tr>
                                    <th>Degree</th>
                                    <th>Institute</th>
                                    <th>Percentage</th>
                                </tr>
                            </thead>
                            <tbody>
                                <tr>
                                    <td>B.E</td>
                                    <td>smt. kashibai navale college of engineering</td>
                                    <td>pursuing</td>
                                </tr>
                                <tr>
                                    <td>Diploma</td>
                                    <td>Government Polytechnic Nashik</td>
                                    <td>91.40</td>
                                </tr>
                                <tr>
                                    <td>SSC</td>
                                    <td>Nashik Board</td>
                                    <td>93.40</td>
                                </tr>
                            </tbody>
                        </table>
                    </div>
                </div>
            </div>
            <div class="jumbotron text-center" id="footer">
                <ul class="nav justify-content-center">
                    <li class="nav-item">
                        <a href="https://www.linkedin.com/in/diksha-chaudhari-b4020a191/"
                        class="fa fa-linkedin nav-link"
                        style={{color:"blue"}}></a>
                    </li>
                    <li class="nav-item">
                        <a href="https://www.twitter.com/diksha__4"
                        class="fa fa-twitter nav-link"
                        style={{color:"blue"}}></a>
                    </li>
                    <li class="nav-item">
                        <a href="https://github.com/dikshachaudhari4"
                        class="fa fa-github nav-link"
                        style={{color:"blue"}}></a>
                    </li>

                </ul>
            </div>

                </div>
            </body>
        );
    }
}

export default Home;
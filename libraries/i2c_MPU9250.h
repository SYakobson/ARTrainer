





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://assets-cdn.github.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-d7137690e30123bade38abb082ac79f36cc7a105ff92e602405f53b725465cab.css" integrity="sha256-1xN2kOMBI7reOKuwgqx582zHoQX/kuYCQF9TtyVGXKs=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-ab5a3a6c016ff53eb79569c505fc0bacabdf745a400351525182f91f8edb55f1.css" integrity="sha256-q1o6bAFv9T63lWnFBfwLrKvfdFpAA1FSUYL5H47bVfE=" media="all" rel="stylesheet" />
  
  
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/site-9628bfea02884cc06cee3aa24062d81f93e06de09ed5bac5557deb155500e539.css" integrity="sha256-lii/6gKITMBs7jqiQGLYH5PgbeCe1brFVX3rFVUA5Tk=" media="all" rel="stylesheet" />
  

  <meta name="viewport" content="width=device-width">
  
  <title>iLib/i2c_MPU9250.h at master · orgua/iLib · GitHub</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars0.githubusercontent.com/u/1045108?s=400&amp;v=4" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="orgua/iLib" property="og:title" /><meta content="https://github.com/orgua/iLib" property="og:url" /><meta content="iLib - Library for various I2C-Sensors with examples for Arduino" property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  
  <meta name="pjax-timeout" content="1000">
  
  <meta name="request-id" content="E13B:37EB:D3D0C2:15B4421:59EA6ED3" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="E13B:37EB:D3D0C2:15B4421:59EA6ED3" name="octolytics-dimension-request_id" /><meta content="iad" name="octolytics-dimension-region_edge" /><meta content="iad" name="octolytics-dimension-region_render" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged Out">


  

      <meta name="hostname" content="github.com">
  <meta name="user-login" content="">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="YmM2NzZjODcxYTU2MzA1NmM1M2JjZWFlOGFmZWM5MWQ0ZDlkNGQxN2ExYmIzNTdjNjhkYjE5ZDBmNzVkYTcwOHx7InJlbW90ZV9hZGRyZXNzIjoiOTUuMjIxLjE0My4xODYiLCJyZXF1ZXN0X2lkIjoiRTEzQjozN0VCOkQzRDBDMjoxNUI0NDIxOjU5RUE2RUQzIiwidGltZXN0YW1wIjoxNTA4NTM2MDE5LCJob3N0IjoiZ2l0aHViLmNvbSJ9">


  <meta name="html-safe-nonce" content="194e12eafc3006c1418cbdeac13cccceb5a73170">

  <meta http-equiv="x-pjax-version" content="71439d76ad78a7c042cc0f15f4a44873">
  

      <link href="https://github.com/orgua/iLib/commits/master.atom" rel="alternate" title="Recent Commits to iLib:master" type="application/atom+xml">

  <meta name="description" content="iLib - Library for various I2C-Sensors with examples for Arduino">
  <meta name="go-import" content="github.com/orgua/iLib git https://github.com/orgua/iLib.git">

  <meta content="1045108" name="octolytics-dimension-user_id" /><meta content="orgua" name="octolytics-dimension-user_login" /><meta content="23991561" name="octolytics-dimension-repository_id" /><meta content="orgua/iLib" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="23991561" name="octolytics-dimension-repository_network_root_id" /><meta content="orgua/iLib" name="octolytics-dimension-repository_network_root_nwo" /><meta content="false" name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" />


    <link rel="canonical" href="https://github.com/orgua/iLib/blob/master/src/i2c_MPU9250.h" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

  </head>

  <body class="logged-out env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="px-2 py-4 show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        <header class="Header header-logged-out  position-relative f4 py-3" role="banner">
  <div class="container-lg d-flex px-3">
    <div class="d-flex flex-justify-between flex-items-center">
      <a class="header-logo-invertocat my-0" href="https://github.com/" aria-label="Homepage" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
        <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
      </a>

    </div>

    <div class="HeaderMenu HeaderMenu--bright d-flex flex-justify-between flex-auto">
        <nav class="mt-0">
          <ul class="d-flex list-style-none">
              <li class="ml-2">
                <a href="/features" class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:features" data-selected-links="/features /features/project-management /features/code-review /features/project-management /features/integrations /features">
                  Features
</a>              </li>
              <li class="ml-4">
                <a href="/business" class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:business" data-selected-links="/business /business/security /business/customers /business">
                  Business
</a>              </li>

              <li class="ml-4">
                <a href="/explore" class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore">
                  Explore
</a>              </li>

              <li class="ml-4">
                    <a href="/marketplace" class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:marketplace" data-selected-links=" /marketplace">
                      Marketplace
</a>              </li>
              <li class="ml-4">
                <a href="/pricing" class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:pricing" data-selected-links="/pricing /pricing/developer /pricing/team /pricing/business-hosted /pricing/business-enterprise /pricing">
                  Pricing
</a>              </li>
          </ul>
        </nav>

      <div class="d-flex">
          <div class="d-lg-flex flex-items-center mr-3">
            <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/orgua/iLib/search" class="js-site-search-form" data-scoped-search-url="/orgua/iLib/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
        <a href="/orgua/iLib/blob/master/src/i2c_MPU9250.h" class="header-search-scope no-underline">This repository</a>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>

          </div>

        <span class="d-inline-block">
            <div class="HeaderNavlink px-0 py-2 m-0">
              <a class="text-bold text-white no-underline" href="/login?return_to=%2Forgua%2FiLib%2Fblob%2Fmaster%2Fsrc%2Fi2c_MPU9250.h" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
                <span class="text-gray">or</span>
                <a class="text-bold text-white no-underline" href="/join?source=header-repo" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
            </div>
        </span>
      </div>
    </div>
  </div>
</header>


  </div>

  <div id="start-of-content" class="show-on-focus"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      





    <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav ">
      <div class="repohead-details-container clearfix container ">

        <ul class="pagehead-actions">
  <li>
      <a href="/login?return_to=%2Forgua%2FiLib"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
    Watch
  </a>
  <a class="social-count" href="/orgua/iLib/watchers"
     aria-label="5 users are watching this repository">
    5
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2Forgua%2FiLib"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
    Star
  </a>

    <a class="social-count js-social-count" href="/orgua/iLib/stargazers"
      aria-label="8 users starred this repository">
      8
    </a>

  </li>

  <li>
      <a href="/login?return_to=%2Forgua%2FiLib"
        class="btn btn-sm btn-with-count tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
        Fork
      </a>

    <a href="/orgua/iLib/network" class="social-count"
       aria-label="7 users forked this repository">
      7
    </a>
  </li>
</ul>

        <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a href="/orgua" class="url fn" rel="author">orgua</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/orgua/iLib" data-pjax="#js-repo-pjax-container">iLib</a></strong>

</h1>

      </div>
      
<nav class="reponav js-repo-nav js-sidenav-container-pjax container"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/orgua/iLib" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /orgua/iLib" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a href="/orgua/iLib/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /orgua/iLib/issues" itemprop="url">
        <svg aria-hidden="true" class="octicon octicon-issue-opened" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg>
        <span itemprop="name">Issues</span>
        <span class="Counter">1</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/orgua/iLib/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /orgua/iLib/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">1</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <a href="/orgua/iLib/projects" class="js-selected-navigation-item reponav-item" data-hotkey="g b" data-selected-links="repo_projects new_repo_project repo_project /orgua/iLib/projects">
      <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="Counter" >0</span>
</a>


  <a href="/orgua/iLib/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors dependency_graph pulse /orgua/iLib/pulse">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Insights
</a>

</nav>


    </div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    
  <a href="/orgua/iLib/blob/83710fbc7bbbf2b29f577f4be7b320a08b9e1f7b/src/i2c_MPU9250.h" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

  <!-- blob contrib key: blob_contributors:v21:94ac02c013b36bc1ab894b903103b3af -->

  <div class="file-navigation js-zeroclipboard-container">
    
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" aria-expanded="false" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/orgua/iLib/blob/master/src/i2c_MPU9250.h"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/orgua/iLib/tree/0.8.2/src/i2c_MPU9250.h"
              data-name="0.8.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="0.8.2">
                0.8.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/orgua/iLib/tree/0.8.1/src/i2c_MPU9250.h"
              data-name="0.8.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="0.8.1">
                0.8.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/orgua/iLib/tree/0.8.0/src/i2c_MPU9250.h"
              data-name="0.8.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="0.8.0">
                0.8.0
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

    <div class="BtnGroup float-right">
      <a href="/orgua/iLib/find/master"
            class="js-pjax-capture-input btn btn-sm BtnGroup-item"
            data-pjax
            data-hotkey="t">
        Find file
      </a>
      <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
    </div>
    <div class="breadcrumb js-zeroclipboard-target">
      <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/orgua/iLib"><span>iLib</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/orgua/iLib/tree/master/src"><span>src</span></a></span><span class="separator">/</span><strong class="final-path">i2c_MPU9250.h</strong>
    </div>
  </div>


  
  <div class="commit-tease">
      <span class="float-right">
        <a class="commit-tease-sha" href="/orgua/iLib/commit/0fa3d1dabd95e2093c49e1ca0d15924c7eee32a7" data-pjax>
          0fa3d1d
        </a>
        <relative-time datetime="2016-02-23T15:27:17Z">Feb 23, 2016</relative-time>
      </span>
      <div>
        <img alt="@orgua" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/1045108?s=40&amp;v=4" width="20" />
        <a href="/orgua" class="user-mention" rel="author">orgua</a>
          <a href="/orgua/iLib/commit/0fa3d1dabd95e2093c49e1ca0d15924c7eee32a7" class="message" data-pjax="true" title="switch files to /src">switch files to /src</a>
      </div>

    <div class="commit-tease-contributors">
      <button type="button" class="btn-link muted-link contributors-toggle" data-facebox="#blob_contributors_box">
        <strong>1</strong>
         contributor
      </button>
      
    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@orgua" height="24" src="https://avatars3.githubusercontent.com/u/1045108?s=48&amp;v=4" width="24" />
            <a href="/orgua">orgua</a>
          </li>
      </ul>
    </div>
  </div>


  <div class="file">
    <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/orgua/iLib/raw/master/src/i2c_MPU9250.h" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/orgua/iLib/blame/master/src/i2c_MPU9250.h" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/orgua/iLib/commits/master/src/i2c_MPU9250.h" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="https://desktop.github.com"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:windows">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
        </button>
  </div>

  <div class="file-info">
      461 lines (376 sloc)
      <span class="file-info-divider"></span>
    22.1 KB
  </div>
</div>

    

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> i2c_MPU9250_h</td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">i2c_MPU9250_h</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>i2c.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>i2c_Sensor.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>* ######################################################################</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c">Driver for the MPU9250-Sensor</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> 9D-IMU 3.7mA, 8µA sleep</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> GYRO XYZ: [3.9 .. 8000 Hz], ±250, ±500, ±1000, and ±2000°/sec and integrated 16-bit ADCs</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> 8µA, 3.2mA active</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ACCE XYZ: ±2g, ±4g, ±8g and ±16g and integrated 16-bit ADCs</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> 8µA, 450µA</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> MAGN XYZ: ±4800μT, 14 bit (0.6μT/LSB) or 16 bit (15μT/LSB)</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ?µA, 280μA @8Hz</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> DMP: Digital Motion Processing</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-c">///</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c">########################################################################  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-k">class</span> <span class="pl-en">MPU9250</span> : <span class="pl-k">public</span> <span class="pl-en">i2cSensor</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>* ######### Register-Map ################################################################# <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    I2C_ADDRESS 	                =(<span class="pl-c1">0x69</span>);</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>MPU9250 Register map</span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_X_GYRO            =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_Y_GYRO            =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_Z_GYRO            =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_X_ACCEL           =(<span class="pl-c1">0x0D</span>);</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_Y_ACCEL           =(<span class="pl-c1">0x0E</span>);</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SELF_TEST_Z_ACCEL           =(<span class="pl-c1">0x0F</span>);</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_XG_OFFSET_H                 =(<span class="pl-c1">0x13</span>);</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_XG_OFFSET_L                 =(<span class="pl-c1">0x14</span>);</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_YG_OFFSET_H                 =(<span class="pl-c1">0x15</span>);</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_YG_OFFSET_L                 =(<span class="pl-c1">0x16</span>);</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ZG_OFFSET_H                 =(<span class="pl-c1">0x17</span>);</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ZG_OFFSET_L                 =(<span class="pl-c1">0x18</span>);</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SMPLRT_DIV                  =(<span class="pl-c1">0x19</span>);</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        <span class="pl-en">HZ_TO_DIV</span>(<span class="pl-k">const</span> <span class="pl-c1">uint16_t</span> hz)</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> ((<span class="pl-c1">1000</span>/hz) - <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_CONFIG                      =(<span class="pl-c1">0x1A</span>);</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FIFO_MODE               =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_EXT_SYNC_SET            =(<span class="pl-c1">0x38</span>);</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DLPF_CFG                =(<span class="pl-c1">0x07</span>);</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_CONFIG                 =(<span class="pl-c1">0x1B</span>);</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_XGYRO_CTEN              =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_YGYRO_CTEN              =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ZGYRO_CTEN              =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_FS_SEL             =(<span class="pl-c1">0x18</span>);</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_GYRO_FS_0250        =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_GYRO_FS_0500        =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_GYRO_FS_1000        =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_GYRO_FS_2000        =(<span class="pl-c1">0x03</span>);</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FCHOICE_B               =(<span class="pl-c1">0x03</span>);</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_CONFIG                =(<span class="pl-c1">0x1C</span>);</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_AX_ST_EN                =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_AY_ST_EN                =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_AZ_ST_EN                =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL_FS_SEL            =(<span class="pl-c1">0x18</span>);</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_ACCEL_FS_02         =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_ACCEL_FS_04         =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_ACCEL_FS_08         =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>            VAL_ACCEL_FS_16         =(<span class="pl-c1">0x03</span>);</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_CONFIG2               =(<span class="pl-c1">0x1D</span>);</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL_FCHOICE_B         =(<span class="pl-c1">0xC0</span>);</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_A_DLPF_CFG              =(<span class="pl-c1">0x03</span>);</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_LP_ACCEL_ODR                =(<span class="pl-c1">0x1E</span>);</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_LPOSC_CLKSEL            =(<span class="pl-c1">0x0F</span>);</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_WOM_THR                     =(<span class="pl-c1">0x1F</span>);</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_FIFO_EN                     =(<span class="pl-c1">0x23</span>);</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_TEMP_FIFO_EN            =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_XOUT               =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_YOUT               =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_ZOUT               =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL                   =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SLV2                    =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SLV1                    =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SLV0                    =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_MST_CTRL                =(<span class="pl-c1">0x24</span>);</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_MULT_MST_EN             =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_WAIT_FOR_ES             =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SLV_3_FIFO_EN           =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_MST_P_NSR           =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_MST_CLK             =(<span class="pl-c1">0x0F</span>);</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV0_ADDR               =(<span class="pl-c1">0x25</span>);</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_RNW            =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_ID_0                =(<span class="pl-c1">0x7F</span>);</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV0_REG                =(<span class="pl-c1">0x26</span>);</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV0_CTRL               =(<span class="pl-c1">0x27</span>);</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_EN             =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_BYTE_SW        =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_REG_DIS        =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_GRP            =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_LENG           =(<span class="pl-c1">0x0F</span>);</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> [without SLV0 to SLV4]</span></td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_MST_STATUS              =(<span class="pl-c1">0x36</span>);</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_PASS_THROUGH            =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV4_DONE           =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_LOST_ARB            =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV4_NACK           =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV3_NACK           =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV2_NACK           =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV1_NACK           =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_NACK           =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_INT_PIN_CFG                 =(<span class="pl-c1">0x37</span>);</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACTL                    =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_OPEN                    =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_LATCH_INT_EN            =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_INT_ANYRD_2CLEAR        =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACTL_FSYNC              =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FSYNC_INT_MODE_EN       =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_BYPASS_EN               =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_INT_ENABLE                  =(<span class="pl-c1">0x38</span>);</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_WOM_EN                  =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FIFO_OFLOW_EN           =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FSYNC_INT_EN            =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_RAW_RDY_EN              =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_INT_STATUS                  =(<span class="pl-c1">0x3A</span>);</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_WOM_INT                 =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FIFO_OFLOW_INT          =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FSYNC_INT               =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_RAW_DATA_RDY_INT        =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_XOUT_H                =(<span class="pl-c1">0x3B</span>);</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_XOUT_L                =(<span class="pl-c1">0x3C</span>);</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_YOUT_H                =(<span class="pl-c1">0x3D</span>);</td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_YOUT_L                =(<span class="pl-c1">0x3E</span>);</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_ZOUT_H                =(<span class="pl-c1">0x3F</span>);</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ACCEL_ZOUT_L                =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_TEMP_OUT_H                  =(<span class="pl-c1">0x41</span>);</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_TEMP_OUT_L                  =(<span class="pl-c1">0x42</span>);</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_XOUT_H                 =(<span class="pl-c1">0x43</span>);</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_XOUT_L                 =(<span class="pl-c1">0x44</span>);</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_YOUT_H                 =(<span class="pl-c1">0x45</span>);</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_YOUT_L                 =(<span class="pl-c1">0x46</span>);</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_ZOUT_H                 =(<span class="pl-c1">0x47</span>);</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_GYRO_ZOUT_L                 =(<span class="pl-c1">0x48</span>);</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_00            =(<span class="pl-c1">0x49</span>);</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_01            =(<span class="pl-c1">0x4A</span>);</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_02            =(<span class="pl-c1">0x4B</span>);</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_03            =(<span class="pl-c1">0x4C</span>);</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_04            =(<span class="pl-c1">0x4D</span>);</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_05            =(<span class="pl-c1">0x4E</span>);</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_06            =(<span class="pl-c1">0x4F</span>);</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_07            =(<span class="pl-c1">0x50</span>);</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_08            =(<span class="pl-c1">0x51</span>);</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_09            =(<span class="pl-c1">0x52</span>);</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_10            =(<span class="pl-c1">0x53</span>);</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_11            =(<span class="pl-c1">0x54</span>);</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_12            =(<span class="pl-c1">0x55</span>);</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_13            =(<span class="pl-c1">0x56</span>);</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_14            =(<span class="pl-c1">0x57</span>);</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_15            =(<span class="pl-c1">0x58</span>);</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_16            =(<span class="pl-c1">0x59</span>);</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_17            =(<span class="pl-c1">0x5A</span>);</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_18            =(<span class="pl-c1">0x5B</span>);</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_19            =(<span class="pl-c1">0x5C</span>);</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_20            =(<span class="pl-c1">0x5D</span>);</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_21            =(<span class="pl-c1">0x5E</span>);</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_22            =(<span class="pl-c1">0x5F</span>);</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_EXT_SENS_DATA_23            =(<span class="pl-c1">0x60</span>);</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV0_DO                 =(<span class="pl-c1">0x63</span>);</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV1_DO                 =(<span class="pl-c1">0x64</span>);</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV2_DO                 =(<span class="pl-c1">0x65</span>);</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_SLV3_DO                 =(<span class="pl-c1">0x66</span>);</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_I2C_MST_DELAY_CTRL          =(<span class="pl-c1">0x67</span>);</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DELAY_ES_SHADOW         =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV4_DLY_EN         =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV3_DLY_EN         =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV2_DLY_EN         =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV1_DLY_EN         =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_SLV0_DLY_EN         =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_SIGNAL_PATH_RESET           =(<span class="pl-c1">0x68</span>);</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_RST                =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL_RST               =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    MSK_TEMP_RST                    =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MOT_DETECT_CTRL             =(<span class="pl-c1">0x69</span>);</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL_INTEL_EN          =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_ACCEL_INTEL_MODE        =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_USER_CTRL                   =(<span class="pl-c1">0x6A</span>);</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FIFO_EN                 =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_MST_EN              =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_IF_DIS              =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_FIFO_RST                =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_I2C_MST_RST             =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SIG_COND_RST            =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_PWR_MGMT_1                  =(<span class="pl-c1">0x6B</span>);</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_H_RESET                 =(<span class="pl-c1">0x80</span>);</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_SLEEP                   =(<span class="pl-c1">0x40</span>);</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_CYCLE                   =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_GYRO_STANDBY_CYCLE      =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_PD_PTAT                 =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_CLKSEL                  =(<span class="pl-c1">0x07</span>);</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_PWR_MGMT_2                  =(<span class="pl-c1">0x6C</span>);</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_XA              =(<span class="pl-c1">0x20</span>);</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_YA              =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_ZA              =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_XG              =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_YG              =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_ZG              =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_XYZA            =(<span class="pl-c1">0x38</span>);</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        MSK_DISABLE_XYZG            =(<span class="pl-c1">0x07</span>);</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_FIFO_COUNTH                 =(<span class="pl-c1">0x72</span>);</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_FIFO_COUNTL                 =(<span class="pl-c1">0x73</span>);</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_FIFO_R_W                    =(<span class="pl-c1">0x74</span>);</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_WHO_AM_I                    =(<span class="pl-c1">0x75</span>);</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        VAL_WHOAMI_6500             =(<span class="pl-c1">0x70</span>);</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>        VAL_WHOAMI_9250             =(<span class="pl-c1">0x71</span>);</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_XA_OFFSET_H                 =(<span class="pl-c1">0x77</span>);</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_XA_OFFSET_L                 =(<span class="pl-c1">0x78</span>);</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_YA_OFFSET_H                 =(<span class="pl-c1">0x7A</span>);</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_YA_OFFSET_L                 =(<span class="pl-c1">0x7B</span>);</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ZA_OFFSET_H                 =(<span class="pl-c1">0x7D</span>);</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_ZA_OFFSET_L                 =(<span class="pl-c1">0x7E</span>);</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>reset values</span></td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    WHOAMI_RESET_VAL                =(<span class="pl-c1">0x71</span>);</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    POWER_MANAGMENT_1_RESET_VAL     =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    DEFAULT_RESET_VALUE             =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    WHOAMI_DEFAULT_VAL              =(<span class="pl-c1">0x68</span>);</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; TODO: Switch to separate lib for the AK8963 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>Magnetometer register maps</span></td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_WIA                     =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_INFO                    =(<span class="pl-c1">0x01</span>);</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ST1                     =(<span class="pl-c1">0x02</span>);</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_XOUT_L                  =(<span class="pl-c1">0x03</span>);</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_XOUT_H                  =(<span class="pl-c1">0x04</span>);</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_YOUT_L                  =(<span class="pl-c1">0x05</span>);</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_YOUT_H                  =(<span class="pl-c1">0x06</span>);</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ZOUT_L                  =(<span class="pl-c1">0x07</span>);</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ZOUT_H                  =(<span class="pl-c1">0x08</span>);</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ST2                     =(<span class="pl-c1">0x09</span>);</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_CNTL                    =(<span class="pl-c1">0x0A</span>);</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_RSV                     =(<span class="pl-c1">0x0B</span>); <span class="pl-c"><span class="pl-c">//</span>reserved mystery meat</span></td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ASTC                    =(<span class="pl-c1">0x0C</span>);</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_TS1                     =(<span class="pl-c1">0x0D</span>);</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_TS2                     =(<span class="pl-c1">0x0E</span>);</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_I2CDIS                  =(<span class="pl-c1">0x0F</span>);</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ASAX                    =(<span class="pl-c1">0x10</span>);</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ASAY                    =(<span class="pl-c1">0x11</span>);</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    REG_MAG_ASAZ                    =(<span class="pl-c1">0x12</span>);</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>Magnetometer register masks</span></td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    MPU9250_WIA                     =(<span class="pl-c1">0x48</span>);</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-c1">uint8_t</span>    MPU9250_                        =(<span class="pl-c1">0x00</span>);</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> <span class="pl-smi">gSensitivity</span>, aSensitivity;</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>* ######### function definition ################################################################# <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; TODO: do i need a constructor? <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">MPU9250</span>(<span class="pl-k">void</span>): <span class="pl-smi">gSensitivity</span>(<span class="pl-c1">1</span>), aSensitivity(<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">setEnabled</span>(<span class="pl-k">const</span> <span class="pl-c1">uint8_t</span> enable = <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> _value;</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (enable) _value = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>        _value = <span class="pl-c1">255</span>;</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_PWR_MGMT_1, MSK_SLEEP, _value);</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_PWR_MGMT_2, B00111111, _value); <span class="pl-c"><span class="pl-c">//</span> enable XYZ of Gyr &amp; Acc</span></td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; takes 0..3 for 250, 500, 1000, 2000 dps <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">setGSensitivity</span>(<span class="pl-k">const</span> <span class="pl-c1">uint8_t</span> <span class="pl-smi">gScaleRange</span> = VAL_GYRO_FS_0500)</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-smi">gScaleRange</span>&lt;<span class="pl-c1">4</span>) i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_GYRO_CONFIG, MSK_GYRO_FS_SEL, <span class="pl-smi">gScaleRange</span>&lt;&lt;<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>      (<span class="pl-smi">gScaleRange</span>==VAL_GYRO_FS_0250) <span class="pl-smi">gSensitivity</span>=<span class="pl-c1">131.0</span>;</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-smi">gScaleRange</span>==VAL_GYRO_FS_0500) <span class="pl-smi">gSensitivity</span>=<span class="pl-c1">65.5</span>;</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-smi">gScaleRange</span>==VAL_GYRO_FS_1000) <span class="pl-smi">gSensitivity</span>=<span class="pl-c1">32.8</span>;</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-smi">gScaleRange</span>==VAL_GYRO_FS_2000) <span class="pl-smi">gSensitivity</span>=<span class="pl-c1">16.4</span>;</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; takes 0..3 for 2, 4, 8 and 16g <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">setASensitivity</span>(<span class="pl-k">const</span> <span class="pl-c1">uint8_t</span> aScaleRange = VAL_ACCEL_FS_04)</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (aScaleRange&lt;<span class="pl-c1">4</span>) i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_ACCEL_CONFIG, MSK_ACCEL_FS_SEL, aScaleRange&lt;&lt;<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>      (aScaleRange==VAL_ACCEL_FS_02) aSensitivity=<span class="pl-c1">16384</span>;</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (aScaleRange==VAL_ACCEL_FS_04) aSensitivity= <span class="pl-c1">8192</span>;</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (aScaleRange==VAL_ACCEL_FS_08) aSensitivity= <span class="pl-c1">4096</span>;</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (aScaleRange==VAL_ACCEL_FS_16) aSensitivity= <span class="pl-c1">2048</span>;</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; round numbers are: 1 kHz, 500 Hz, 200, 125, 100, 50, 25, 20, 10 ... <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">setDatarate</span>(<span class="pl-k">const</span> <span class="pl-c1">uint16_t</span> hzFreq=<span class="pl-c1">100</span>)</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>*&lt; with clockratedivider for samplerate 1kHz (Configure FChoice) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">writeByte</span>(I2C_ADDRESS, REG_SMPLRT_DIV, (<span class="pl-c1">uint8_t</span>) <span class="pl-c1">HZ_TO_DIV</span>(hzFreq));</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">setBandwidth</span>(<span class="pl-k">const</span> <span class="pl-c1">uint16_t</span> hzFreq=<span class="pl-c1">100</span>)</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> dlpf;</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>      (hzFreq&gt;<span class="pl-c1">184</span>)    dlpf   = <span class="pl-c1">0</span>; <span class="pl-c"><span class="pl-c">//</span> 460 Hz Acc, FS= 1 kHz // 250 Hz Gyro, 4000 Hz Temp, FS=8kHz</span></td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (hzFreq&gt;<span class="pl-c1">92</span>)     dlpf   = <span class="pl-c1">1</span>; <span class="pl-c"><span class="pl-c">//</span> 184 Hz Gyro/Acc, 4000 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (hzFreq&gt;<span class="pl-c1">41</span>)     dlpf   = <span class="pl-c1">2</span>; <span class="pl-c"><span class="pl-c">//</span> 92 Hz Gyro/Acc, 4000 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (hzFreq&gt;<span class="pl-c1">20</span>)     dlpf   = <span class="pl-c1">3</span>; <span class="pl-c"><span class="pl-c">//</span> 41 Hz Gyro/Acc, 42 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (hzFreq&gt;<span class="pl-c1">10</span>)     dlpf   = <span class="pl-c1">4</span>; <span class="pl-c"><span class="pl-c">//</span> 20 Hz Gyro/Acc, 20 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (hzFreq&gt;<span class="pl-c1">5</span>)      dlpf   = <span class="pl-c1">5</span>; <span class="pl-c"><span class="pl-c">//</span> 10 Hz Gyro/Acc, 10 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>                    dlpf   = <span class="pl-c1">6</span>; <span class="pl-c"><span class="pl-c">//</span>  5 Hz Gyro/Acc,  5 Hz Temp, FS=1kHz</span></td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>*&lt; Rework, page 15 - FS=1kHz --&gt; Bandbreite einstellen <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_CONFIG,      MSK_DLPF_CFG,   dlpf); <span class="pl-c"><span class="pl-c">//</span> 0x1A DLPF p13</span></td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_GYRO_CONFIG, MSK_FCHOICE_B,  <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> 0x1B gFChoice</span></td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_ACCEL_CONFIG2, MSK_A_DLPF_CFG,      dlpf);</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_ACCEL_CONFIG2, MSK_ACCEL_FCHOICE_B, <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> aFChoice</span></td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">reset</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> rVector;</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">        rVector = MSK_GYRO_RST | MSK_ACCEL_RST | MSK_TEMP_RST;</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_SIGNAL_PATH_RESET, rVector, rVector);           <span class="pl-c"><span class="pl-c">//</span> Registers of Sensors</span></td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_USER_CTRL, MSK_SIG_COND_RST, MSK_SIG_COND_RST); <span class="pl-c"><span class="pl-c">//</span> Signal paths of Sensors</span></td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_PWR_MGMT_1, MSK_H_RESET, MSK_H_RESET);          <span class="pl-c"><span class="pl-c">//</span> internal Registers</span></td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-c1">uint8_t</span> <span class="pl-en">initialize</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (i2c.<span class="pl-c1">probe</span>(I2C_ADDRESS) == <span class="pl-c1">0</span>) <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> 0x19 Sample Rate Divider - standard = 0 (+1)</span></td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">reset</span>();</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">delay</span>(<span class="pl-c1">20</span>);</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>setEnabled(0);</span></td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">setBandwidth</span>(<span class="pl-c1">20</span>);</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">setDatarate</span>(<span class="pl-c1">100</span>);</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">setGSensitivity</span>(VAL_GYRO_FS_0500);</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">setASensitivity</span>(VAL_ACCEL_FS_04);</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Clocksource</span></td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_PWR_MGMT_1, MSK_CLKSEL, <span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> should be VAL_CLOCK_PLL_XGYRO, is it?</span></td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> PWR MGMT</span></td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_PWR_MGMT_1, MSK_CYCLE | MSK_GYRO_STANDBY_CYCLE | MSK_PD_PTAT, <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> Normal operation</span></td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> INTs</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_INT_PIN_CFG, MSK_INT_ANYRD_2CLEAR,MSK_INT_ANYRD_2CLEAR); <span class="pl-c"><span class="pl-c">//</span> Clear INT at read</span></td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_INT_ENABLE , MSK_RAW_RDY_EN,      MSK_RAW_RDY_EN);     <span class="pl-c"><span class="pl-c">//</span> INT: Raw Data Ready to read</span></td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> I2C-Master</span></td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_USER_CTRL  , MSK_I2C_MST_EN,      <span class="pl-c1">0</span>);                  <span class="pl-c"><span class="pl-c">//</span> disable I2C-Master</span></td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">setRegister</span>(I2C_ADDRESS, REG_INT_PIN_CFG  , MSK_BYPASS_EN, MSK_BYPASS_EN);      <span class="pl-c"><span class="pl-c">//</span> enable Bypass mode!</span></td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">setEnabled</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> who =  i2c.<span class="pl-c1">readByte</span>(I2C_ADDRESS, REG_WHO_AM_I);</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>      (who == VAL_WHOAMI_6500) <span class="pl-k">return</span> <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span> (who == VAL_WHOAMI_9250) <span class="pl-k">return</span> <span class="pl-c1">3</span>;</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>                             <span class="pl-k">return</span> <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; check for new data, return 1 when Measurement is ready <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-c1">uint8_t</span> <span class="pl-en">checkMeasurement</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (i2c.<span class="pl-c1">readByte</span>(I2C_ADDRESS,REG_INT_STATUS)&amp;MSK_RAW_DATA_RDY_INT) <span class="pl-k">return</span> <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>                                                               <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt;  if you started a measurement and want to actively wait for it to finish <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-c1">uint8_t</span> <span class="pl-en">awaitMeasurement</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> _counter = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">while</span>(<span class="pl-c1">checkMeasurement</span>()==<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(++_counter &gt; <span class="pl-c1">250</span>) <span class="pl-k">return</span> <span class="pl-c1">0</span>; <span class="pl-c"><span class="pl-c">//</span>Error out after max of 250ms for a read</span></td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">delay</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">return</span> <span class="pl-c1">1</span>; <span class="pl-c"><span class="pl-c">//</span> Measurement finished</span></td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*&lt; TODO: separate RAW and Scaled GET <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">getMeasurement</span>(<span class="pl-k">float</span> xyz_AccTemGyr[])</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">uint8_t</span> _data[<span class="pl-c1">14</span>];</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">        i2c.<span class="pl-c1">read</span>(I2C_ADDRESS,REG_ACCEL_XOUT_H, _data, <span class="pl-c1">14</span>);</td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> RAW</span></td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">0</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">0</span>]&lt;&lt;<span class="pl-c1">8</span> | _data[<span class="pl-c1">1</span>]); <span class="pl-c"><span class="pl-c">//</span> ACC</span></td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">1</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">2</span>]&lt;&lt;<span class="pl-c1">8</span> | _data[<span class="pl-c1">3</span>]);</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">2</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">4</span>]&lt;&lt;<span class="pl-c1">8</span> | _data[<span class="pl-c1">5</span>]);</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">3</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">6</span>]&lt;&lt;<span class="pl-c1">8</span> | _data[<span class="pl-c1">7</span>]); <span class="pl-c"><span class="pl-c">//</span> TEMP</span></td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">4</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">8</span>]&lt;&lt;<span class="pl-c1">8</span> | _data[<span class="pl-c1">9</span>]); <span class="pl-c"><span class="pl-c">//</span> GYR</span></td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">5</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">10</span>]&lt;&lt;<span class="pl-c1">8</span>| _data[<span class="pl-c1">11</span>]);</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">6</span>] = <span class="pl-c1">int16_t</span>(_data[<span class="pl-c1">12</span>]&lt;&lt;<span class="pl-c1">8</span>| _data[<span class="pl-c1">13</span>]);</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> Scale</span></td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">3</span>] = xyz_AccTemGyr[<span class="pl-c1">3</span>] / <span class="pl-c1">333.87</span> + <span class="pl-c1">21</span>; <span class="pl-c"><span class="pl-c">//</span> TEMP_degC = ((TEMP_OUT – RoomTemp_Offset)/Temp_Sensitivity) + 21degC</span></td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">0</span>] /= aSensitivity; <span class="pl-c"><span class="pl-c">//</span> ACC</span></td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">1</span>] /= aSensitivity;</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">2</span>] /= aSensitivity;</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">4</span>] /= <span class="pl-smi">gSensitivity</span>; <span class="pl-c"><span class="pl-c">//</span> GYR</span></td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">5</span>] /= <span class="pl-smi">gSensitivity</span>;</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">        xyz_AccTemGyr[<span class="pl-c1">6</span>] /= <span class="pl-smi">gSensitivity</span>;</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>* ######### Digital Motion Processor ################################################################# <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>* ######### Preinstantiate Object ################################################################# <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>* &lt; it&#39;s better when this is done by the user <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>PRESET preset = PRESET();</span></td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
</table>

  <div class="BlobToolbar position-absolute js-file-line-actions dropdown js-menu-container js-select-menu d-none" aria-hidden="true">
    <button class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1 dropdown-toggle js-menu-target" id="js-file-line-action-button" type="button" aria-expanded="false" aria-haspopup="true" aria-label="Inline file action toolbar" aria-controls="inline-file-actions">
      <svg aria-hidden="true" class="octicon" height="16" version="1.1" viewBox="0 0 13 4" width="14">
        <g stroke="none" stroke-width="1" fill-rule="evenodd">
            <g transform="translate(-1.000000, -6.000000)">
                <path d="M2.5,9.5 C1.67157288,9.5 1,8.82842712 1,8 C1,7.17157288 1.67157288,6.5 2.5,6.5 C3.32842712,6.5 4,7.17157288 4,8 C4,8.82842712 3.32842712,9.5 2.5,9.5 Z M7.5,9.5 C6.67157288,9.5 6,8.82842712 6,8 C6,7.17157288 6.67157288,6.5 7.5,6.5 C8.32842712,6.5 9,7.17157288 9,8 C9,8.82842712 8.32842712,9.5 7.5,9.5 Z M12.5,9.5 C11.6715729,9.5 11,8.82842712 11,8 C11,7.17157288 11.6715729,6.5 12.5,6.5 C13.3284271,6.5 14,7.17157288 14,8 C14,8.82842712 13.3284271,9.5 12.5,9.5 Z"></path>
            </g>
        </g>
      </svg>
    </button>
    <div class="dropdown-menu-content js-menu-content" id="inline-file-actions">
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2">
        <li><a class="js-zeroclipboard dropdown-item" style="cursor:pointer;" id="js-copy-lines" data-original-text="Copy lines">Copy lines</a></li>
        <li><a class="js-zeroclipboard dropdown-item" id= "js-copy-permalink" style="cursor:pointer;" data-original-text="Copy permalink">Copy permalink</a></li>
        <li><a href="/orgua/iLib/blame/83710fbc7bbbf2b29f577f4be7b320a08b9e1f7b/src/i2c_MPU9250.h" class="dropdown-item js-update-url-with-hash" id="js-view-git-blame">View git blame</a></li>
          <li><a href="/orgua/iLib/issues/new" class="dropdown-item" id="js-new-issue">Open new issue</a></li>
      </ul>
    </div>
  </div>

  </div>

  </div>

  <button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
  <div id="jump-to-line" style="display:none">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
      <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
      <button type="submit" class="btn">Go</button>
</form>  </div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

      
<div class="footer container-lg px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between py-6 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2017 <span title="0.11496s from unicorn-3429640822-phgdh">GitHub</span>, Inc.</li>
        <li class="mr-3"><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li class="mr-3"><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li class="mr-3"><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li class="mr-3"><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>

    <a href="https://github.com" aria-label="Homepage" class="footer-octicon" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li class="mr-3"><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li class="mr-3"><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha256-OeJ6kY/8Lql07mI9nOp6ZSE/SUUgH6263iR+R5Lab7Q=" src="https://assets-cdn.github.com/assets/frameworks-39e27a918ffc2ea974ee623d9cea7a65213f4945201fadbade247e4792da6fb4.js"></script>
    
    <script async="async" crossorigin="anonymous" integrity="sha256-snuOPPtgtxQZEAhuAJsLiEz6Pq55IPU0YWjGfSdPNX4=" src="https://assets-cdn.github.com/assets/github-b27b8e3cfb60b7141910086e009b0b884cfa3eae7920f5346168c67d274f357e.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>


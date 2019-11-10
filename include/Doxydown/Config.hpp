#pragma once
#include <string>

namespace Doxydown {
    struct Config {
        // Where to store the output files?
        std::string outputDir;

        // Generate extra JSON for each rendered template
        bool debugTemplateJson{false};

        // Put all stuff into categorized folders or everything into destination folder?
        bool useFolders{true};

        // Copy images from the Doxygen xml dir?
        bool copyImages{true};

        // Where to copy images
        std::string imagesFolder{"images"};

        // Convert all refids (including folder names) into lowercase?
        bool linkLowercase{false};

        // Should we put the class, namespace, modules, and files indexes
        // into their respective folders? (Hugo/Learn) needs that!
        bool indexInFolders{false};

        // If mainpage (indexpage) is present, should it be located
        // in the outputDir folder or in outpurDir/folderRelatedPagesName folder? 
        bool mainPageInRoot{false};

        // Name of the mainpage (indexpage)
        std::string mainPageName{"indexpage"};

        // What is the base URL to prepend all links with?
        std::string baseUrl{""};

        // What should the file end with?
        std::string fileExt{"md"};

        // What should the link end with?
        std::string linkSuffix{".md"};

        // What are the folder names?
        std::string folderGroupsName{"Modules"};
        std::string folderClassesName{"Classes"};
        std::string folderFilesName{"Files"};
        std::string folderRelatedPagesName{"Pages"};
        std::string folderNamespacesName{"Namespaces"};

        // What are the names of the index files?
        std::string indexGroupsName{"index_groups"};
        std::string indexClassesName{"index_classes"};
        std::string indexFilesName{"index_files"};
        std::string indexRelatedPagesName{"index_pages"};
        std::string indexNamespacesName{"index_namespaces"};

        // What templates to use for each kind?
        std::string templateKindClass{"kind_class"};
        std::string templateKindStruct{"kind_class"};
        std::string templateKindUnion{"kind_class"};
        std::string templateKindInterface{"kind_class"};
        std::string templateKindNamespace{"kind_nonclass"};
        std::string templateKindGroup{"kind_nonclass"};
        std::string templateKindFile{"kind_file"};
        std::string templateKindDir{"kind_file"};
        std::string templateKindPage{ "kind_page" };

        // What templates to use for indexes?
        std::string templateIndexClasses{"index_classes"};
        std::string templateIndexNamespaces{"index_namespaces"};
        std::string templateIndexGroups{"index_groups"};
        std::string templateIndexFiles{"index_files"};
        std::string templateIndexRelatedPages{"index_pages"};

        // What should the title be in the index pages?
        std::string indexClassesTitle{"Classes"};
        std::string indexNamespacesTitle{"Namespaces"};
        std::string indexGroupsTitle{"Modules"};
        std::string indexFilesTitle{"Files"};
        std::string indexRelatedPagesTitle{"Pages"};
    };

    void loadConfig(Config& config, const std::string& path);
    void loadConfigData(Config& config, const std::string& src);
    void saveConfig(Config& config, const std::string& path);
}
